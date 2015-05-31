---
layout:			script-page
title:			"Get live match score update on your computer"
share_desc:		"I had a project deadline during India vs South Africa Cricket World Cup 2015 and didn't had bandwidth to stream it live. I wrote a script that notified me the score regularly ... do check it out!."
date:			2015-05-25
author:			"Arpit Bhayani"
category:		script
tags:			["python", "cricket", "notification", "live-score"]
keywords:		cricket, python, cricket, notification, score, live match
comments:		true

short-desc:		If you don't want to look at the score websites again and again. If you want score to pop up after regular interval. If you want to continue with your work and still be updated with the cricket match proceedings ... heres a script for you.

---

<div class="para">
If you don't want to look at the score websites again and again. If you want score to pop up after regular interval. If you want to continue with your work and still be updated with the cricket match proceedings ... here is a script for you.
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
	To execute the script, follow the following steps:
	</div>
	<div class="para">
		<emphasis class="bold">Step 1:</emphasis> Open the live match page on espncricinfo website.
		<br/>
		This page is the one where you see the score of the match in progress. The URL looks something like this.
		<emphasis class="bold">http://www.espncricinfo.com/pakistan-zimbabwe-2015/engine/match/868731.html</emphasis>
	</div>
	<div class="para">
		<emphasis class="bold">Step 2:</emphasis> Pick the last number from the URL.
		<br/>
		<img class="screenshot" src="/img/script/image01.png" alt="Pick match number from the URL"/><br/>
	</div>
	<div class="para">
		<emphasis class="bold">Step 3:</emphasis> Open the script and replace XXXXXX with this number.
		<br/>
		<img class="screenshot" src="/img/script/image02.png" alt="Replace XXXXXX with 868731"/><br/>
	</div>
	<div class="para">
		<emphasis class="bold">Step 4:</emphasis> Execute the script.
	</div>
{% highlight text %}
python cricnot.py
{% endhighlight %}

<div class="para">
You should see output something like this:
<img class="screenshot" src="/img/script/image03.png" alt="Sample Screenshot"/><br/>
</div>
</section>

<section>
<div class="file-name">File: cricnot.py</div>
{% highlight python %}
import notify2
import time
import urllib2
import json

match_url = 'http://www.espncricinfo.com/ci/engine/match/XXXXXX.json'


proxy = urllib2.ProxyHandler(
        {
                'http': 'put_proxy_here',
                'https': 'put_proxy_here'
        }
)

""" In Case you have proxy uncomment line below """
"""opener = urllib2.build_opener(proxy)"""

""" When No Proxy un-comment line below """
opener = urllib2.build_opener()
urllib2.install_opener(opener)

notify2.init('cricnot')

while True:
        r = urllib2.urlopen(match_url)
        j = json.loads(r.read())

        msg = j['live']['status']

        for i in j['centre']['batting']:
                msg += ('<br/>' + i['popular_name'] + ' - ' + i['runs']  + ' (' + i['balls_faced']  + ')')

        n = notify2.Notification(j['description'].split(':')[0],msg)

        n.show()
        time.sleep(20)


{% endhighlight %}
</section>

<section>
	<div class="para">
		<emphasis class="bold">If you liked the script then do share it ;)</emphasis>
	</div>
</section>