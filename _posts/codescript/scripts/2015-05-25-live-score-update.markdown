---
layout:			script-page
title:			"Script to get live match score update on your computer"
share_desc:		"I had a project deadline during India vs South Africa Cricket World Cup 2015 and didn't had bandwidth to stream it live. I wrote a script that notified me the score regularly."
date:			2015-05-25
author:			"Arpit Bhayani"
category:		script
tags:			["python", "cricket", "notification", "live-score"]
keywords:		cricket, python, cricket, notification, score, live match
comments:		true

short-desc:		We all had those days where we were busy with some important work or a quick deadline during, when the most critical match is in progress. You don't even have time to look at the score websites. I too was in same situation once, but I wrote a script that did a trick.

---

<div class="para">
We all had those days where we were busy with some important work or a quick deadline during, when the most critical match is in progress. You don't even have time to look at the score websites. I too was in same situation once, but I wrote a script that did a trick.
</div>

<div class="para">
I wrote a script that would fetch the score json object from <a href="http://espncricinfo.com">espncricinfo.com</a> website that contains the live score. This json object is always updated with the latest score and it is used to render the live score page of the website. The script notifies you with the score update at a regular interval of time with a small pop up that eventually fades away in some time.
</div>

<section>
	<div class="para">
	You need to have following python modules before you run the script.
	<ul>
		<li>time</li>
		<li>json</li>
		<li>notify2</li>
		<li>urllib2</li>
	</ul>
	</div>
	<div class="para">
	To install <emphasis class="code">notify2</emphasis> execute following statement:
{% highlight text %}
sudo apt-get install python-notify2
{% endhighlight %}

</div>
<div class="para">Typically other modules are built-in in python. Still if you get any error during execution of script you can easily install other modules in your system.</div>
</section>

<section>
	<div class="para">
	To execute the script, you first need to make changes into the variable <emphasis class="code">match_url</emphasis>, which is the URL of the json object of the match. This URL can be obtained from the match page of espncricinfo.com.
	</div>
	<div class="para">
	After making above changes, execute the script as a regular python file
	</div>
{% highlight text %}
python cricnot.py
{% endhighlight %}
</section>

<section>
<div class="file-name">File: cricnot.py</div>
{% highlight python %}
import notify2
import time
import urllib2
import json

match_url = 'http://www.espncricinfo.com/ci/engine/match/743935.json'


'''proxy = urllib2.ProxyHandler(
	{
		'http': 'your_proxy_here',
		'https': 'your_proxy_here'
	}
)'''
opener = urllib2.build_opener()
urllib2.install_opener(opener)

notify2.init('cricnot')

while True:
	r = urllib2.urlopen(match_url)
	j = json.loads(r.read())

	print j

	msg = j['live']['status']

	for i in j['centre']['batting']:
		msg += ('<br/>' + i['popular_name'] + ' - ' + i['runs']  + ' (' + i['balls_faced']  + ')')

	n = notify2.Notification(j['description'].split(':')[0],msg)

	n.show()
	time.sleep(20)

{% endhighlight %}
</section>