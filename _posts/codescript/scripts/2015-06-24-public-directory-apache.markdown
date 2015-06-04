---
layout:			script-page
title:			"Share unlimited data on LAN for Windows"
share_desc:		"Ever wanted to share files with your colleagues or friends and at that very moment you couldn't find your external hard-drive or flash drive. No worries! the solution to this problem is very simple and elegant plus NO DATA LIMIT ON TRANSFER. Check it out!"
date:			2015-06-04
author:			"Arpit Bhayani"
author-link:	/profile/arpit
category:		script
tags:			["public", "share", "windows", "directory", "apache"]
keywords:		public, share, windows, directory, apache
comments:		true

short-desc:		Ever wanted to share files with your colleagues or friends and at that very moment you couldn't find your external hard-drive or flash drive. No worries! the solution to this problem is very simple and elegant plus NO DATA LIMIT ON TRANSFER. Check it out!

---

<div class="para">
There are always times when you want to share data with your colleagues and friends. The data can be as huge as hundreds of GBs or as small as a 1KB text file. There are lots of ways you can achieve this; to name a few:
<ul>
	<li>Use a USB Flash drive</li>
	<li>Use a external hard drive</li>
	<li>Put data onto some cloud storage</li>
</ul>
</div>

<div class="para">
	Each of the above has its own pros and cons. The use of USB Flash drive and External hard drive enables data transfer of files up to some limit i.e. it puts a constraint on the file size; plus in some organizations it is not allowed to carry some external storage with you. So you cannot always have the liberty of using external storage for file transfer. Using data storage on cloud is always a slower option; plus it is infeasible for larger files.
</div>

<div class="para">
	Considering above pros and cons we think if there exists any solution that can enable unlimited data transfer between two machine. The answer is <emphasis class="bold">"YES"</emphasis> and it can be accomplished using a simple HTTP Web Server.
</div>

<div class="para">
	You will need a simple and highly popular "Apache HTTP Server". Thats it! 
</div>

<div class="para">
	Following changes are with respect to <a href="https://archive.apache.org/dist/httpd/binaries/win32/httpd-2.2.22-win32-x86-no_ssl.msi">Apache HTTP Server 2.2.21</a> and should work just fine on any version of it.
</div>

<section>
	<div class="para">
	You need to do the following:
	<br/>
	<div class="para">
		<emphasis class="bold">Step 1:</emphasis> Open <emphasis class="code">httpd.conf</emphasis> file present in the <emphasis class="code">conf</emphasis> folder of the Apache installation location.
		<div class="note-box">
			<ul>
				<li>Stop the Apache server before editing the httpd.conf file.</li>
				<li>You may require Administrator privileges to make changes in it.</li>
			</ul>
		</div>
	</div>
	<div class="para">
		<emphasis class="bold">Step 2:</emphasis> At the end of the file add following snippet
	</div>
{% highlight xml %}
Alias /my_alias "F:/Pic"
<Directory "F:/Pic">
    Options Indexes FollowSymLinks MultiViews ExecCGI
    AllowOverride All
    Order allow,deny
    Allow from all
</Directory>
{% endhighlight %}

<div class="para">
	<table class="table">
		<thead>
			<th>Entity</th>
			<th>Description</th>
		</thead>
		<tbody>
			<tr>
				<td>
					<emphasis class="bold">my_alias</emphasis>
				</td>
				<td>
					The alias with which you want to expose your shared folder.
				</td>
			</tr>
			<tr>
				<td>
					<emphasis class="bold">F:/Pic</emphasis>
				</td>
				<td>
					The folder location that is to be shared.
				</td>
			</tr>
		</tbody>
	</table>
	<emphasis class="bold">Please note the FORWARD_SLASH used in the path, should be as they are.</emphasis>
	<img class="screenshot centered" src="/img/script/s2/s6.png" alt="Folder contents"/>
</div>
<div class="para">
	<emphasis class="bold">Step 3:</emphasis> Restart the Apache Server from taskbar
	<img class="screenshot" src="/img/script/s2/s5.png" alt="Taskbar Apache Icon"/>
</div>
<div class="para">
	<emphasis class="bold">Step 4:</emphasis> Hit the URL <a href="http://localhost:80/my_alias">http://localhost:80/my_alias</a>
	<br/>
	You will see something like this. This folder is now shared on LAN and anyone with your IP Address can access it.
	<img class="screenshot" src="/img/script/s2/s7.png" alt="Browser View"/>
</div>
</section>

<section>
	<div class="para">
		<emphasis class="bold">You can thus share any number of folders you want; just add corresponding lines to <emphasis class="code">httpd.conf</emphasis>.</emphasis>
	</div>
</section>
	
<section>
	<div class="para">
		<emphasis class="bold">If you liked the script then do share it ;)</emphasis>
	</div>
</section>