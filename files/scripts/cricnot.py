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
