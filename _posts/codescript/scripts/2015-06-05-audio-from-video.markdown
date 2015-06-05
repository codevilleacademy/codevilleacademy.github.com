---
layout:			script-page
title:			"Extract audio from video"
share_desc:		"A python script that converts MP4 files to MP3."


author:			"Harshil Goel"
author-link:	https://www.facebook.com/harshil.goel.77
date:			2015-06-05

asked-by:		"Aditya Joshi"
asked-by-link:	https://www.facebook.com/josh.adie
asked-by-email:	adityajoshi5@gmail.com
asked-by-date:	2015-06-05

category:		script-pitch

tags:			["audio", "video", "python", "extract", "mp4-to-mp3"]
keywords:		audio, video, python, extract, mp4 to mp3
comments:		true

short-desc:		"A python script that converts MP4 files to MP3."

---

<div class="para">
Following is a script that converts a MP4 file into MP3 in python.
</div>

<div class="para">
	<emphasis class="bold">Prerequisite :</emphasis>
</div>

<div class="para">
	<ul>
		<li>python2.7</li>
		<li>mplayer</li>
		<li>lame</li>
	</ul>
	To install each of these, execute the lines below
</div>

{% highlight text %}
sudo apt-get install python2.7
sudo apt-get install mplayer
sudo apt-get install lame
{% endhighlight %}


<section>
	<div class="para">
		To execute the script, follow the following steps:
	</div>
</section>

{% highlight bash %}
	python mp4tomp3.py <DIRECTORY_PATH_MP4> <DIRECTORY_PATH_MP3>
{% endhighlight %}

<div class="para">
	It will convert all the <emphasis class="bold">MP4 files</emphasis> present in the directory <emphasis class="code">DIRECTORY_PATH_MP4</emphasis> to <emphasis class="bold">MP3 files</emphasis> and store it in directory <emphasis class="code">DIRECTORY_PATH_MP3</emphasis>.
</div>

<section>
<div class="file-name">
	File: <a href="/files/scripts/mp4tomp3.py">mp4tomp3.py</a>
</div>
{% highlight python %}
# MP4 TO MP3 CONVERSION SCRIPT
# script to convert mp4 video files to mp3 audio
# useful for turning video from sites such as www.ted.com into audio files useable
# on any old mp3 player.
#
# usage: python mp4tomp3.py [input directory [output directory]]
# input directory (optional)  - set directory containing mp4 files to convert (defaults to current folder)
# output directory (optional) - set directory to export mp3 files to (defaults to input)
#
# NOTE: you will need python 2, mplayer and lame for this script to work
# sudo apt-get install lame
# sudo apt-get install mplayer
# sudo apt-get install python2.7


from subprocess import call     # for calling mplayer and lame
from sys import argv            # allows user to specify input and output directories
import os                       # help with file handling

def check_file_exists(directory, filename, extension):
    path = directory + "/" + filename + extension
    return os.path.isfile(path)

def main(indir, outdir):


    try:
        # check specified folders exist
        if not os.path.exists(indir):
            exit("Error: Input directory \'" + indir + "\' does not exist. (try prepending './')")
        if not os.path.exists(outdir):
            exit("Error: Output directory \'" + outdir + "\' does not exist.")
        if not os.access(outdir, os.W_OK):
            exit("Error: Output directory \'" + outdir + "\' is not writeable.")

        print "[%s/*.mp4] --> [%s/*.mp3]" % (indir, outdir)
        files = [] # files for exporting
            
        # get a list of all convertible files in the input directory
        filelist = [ f for f in os.listdir(indir) if f.endswith(".mp4") ]
        for path in filelist:
            basename = os.path.basename(path) 
            filename = os.path.splitext(basename)[0]
            files.append(filename)
        # remove files that have already been outputted from the list
        files[:] = [f for f in files if not check_file_exists(outdir, f, ".mp3")]
    except OSError as e:
        exit(e)
    
    if len(files) == 0:
        exit("Could not find any files to convert that have not already been converted.")

    # convert all unconverted files
    for filename in files:
        print "-- converting %s.mp4 to %s.mp3 --" % (indir + "/" + filename, outdir + "/" + filename)
        call(["mplayer", "-novideo", "-nocorrect-pts", "-ao", "pcm:waveheader", indir + "/" + filename + ".mp4"])
        call(["lame", "-h", "-b", "192", "audiodump.wav", outdir + "/" + filename + ".mp3"])
        os.remove("audiodump.wav")

# set the default directories and try to get input directories
args = [".", "."]
for i in range(1, min(len(argv), 3)):
    args[i - 1] = argv[i]

# if only input directory is set, make the output directory the same
if len(argv) == 2:
    args[1] = args[0]

main(args[0], args[1])

{% endhighlight %}
</section>


<div class="para">
	Source: <a href="https://github.com/andyp123/mp4_to_mp3">https://github.com/andyp123/mp4_to_mp3</a>
</div>

<section>
	<div class="para">
		<emphasis class="bold">If you liked the script then do share it ;)</emphasis>
	</div>
</section>