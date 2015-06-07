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
