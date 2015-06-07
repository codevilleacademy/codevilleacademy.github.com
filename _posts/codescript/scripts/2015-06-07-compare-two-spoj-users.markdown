---
layout:			script-page
title:			"Compare two SPOJ users"
share_desc:		"A python script to compare two users on spoj by questions they solved. It will output the question codes that you didn't solve and that were solved by the other user."

author:			"Arpit Bhayani"
author-link:	/profile/arpit
date:			2015-06-07

category:		script

tags:			["spoj", "python", "urllib2", "beautifulsoup4"]
keywords:		spoj, python, urllib2, beautifulsoup4
comments:		true

short-desc:		"A python script to compare two users on spoj by questions they solved. It will output the question codes that you didn't solve and that were solved by the other user."

---

<div class="para">
    Whenever you are practicing questions on <a href="http://spoj.com/">SPOJ</a> you tend to follow some user. Since you are following him/her you need to look for the questions that were solved by him/her and not by you. So Instead of manually looking at all the question codes, you can simply <emphasis class="bold">execute this script</emphasis>.
</div>
<div class="para">
    The following python script will tell you which questions the other user solved and you didn't. Instead of spending a lot of time checking every question code if it has been solved by you or not; you can simply execute following script and find out the answer ;)
</div>

<div class="para">
	<emphasis class="bold">Prerequisite :</emphasis>
</div>

<div class="para">
	<ul>
		<li>python2.7</li>
		<li>urllib2</li>
		<li>BeautifulSoup4</li>
	</ul>
	To install BeautifulSoup4 (140KB), execute the lines below
</div>

{% highlight text %}
sudo pip install beautifulsoup4
{% endhighlight %}


<section>
	<div class="para">
		To execute the script, follow the following steps:
	</div>
</section>

{% highlight bash %}
python spojcompare.py <USERNAME1> <USERNAME2>
{% endhighlight %}

<div class="para">
	It will output
    <emphasis class="bold">all the questions solved by USERNAME2 and not by USERNAME1</emphasis>
</div>

<div class="para">
    So if you are comparing yourself to other user, you should execute it as
</div>
{% highlight bash %}
python spojcompare.py <YOUR_USER_NAME> <OTHER_USER_NAME>
{% endhighlight %}

<section>
<div class="file-name">
	File: <a href="/files/scripts/spojcompare.py">spojcompare.py</a>
</div>
{% highlight python %}
"""
    Author: Arpit Bhayani
    Require
        1. urllib2
        2. beautifulsoup4
"""
from bs4 import BeautifulSoup
import urllib2
import sys

"""
    Returns BeautifulSoup4 object from username
"""
def fetch(username):
    d = urllib2.urlopen('http://www.spoj.com/users/' + username).read()
    return BeautifulSoup(d)

def get_codes(u, d):
    solved = set()

    try:
        tables = d.find(id='user-profile-tables').find_all('table')
    except AttributeError:
        print "Invalid Username : ", u
        exit()
    
    for i in tables[0].find_all('a'):
        code = i.get_text().strip()
        if code != '':
            solved.add(code)

    return solved

def compare(user1, user2):
    d1 = fetch(user1)
    d2 = fetch(user2)

    solved1 = get_codes(user1, d1)
    solved2 = get_codes(user2, d2)

    for i in solved2.difference(solved1):
        print i


if len(sys.argv) < 3:
    print "Usage: python spojcompare.py <USERNAME1> <USERNAME2>"
    exit();

compare(sys.argv[1], sys.argv[2])

{% endhighlight %}
</section>

<section>
	<div class="para">
		<emphasis class="bold">If you liked the script then do share it ;)</emphasis>
	</div>
</section>