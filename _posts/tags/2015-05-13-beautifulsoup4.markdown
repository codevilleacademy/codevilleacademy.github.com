---
layout:			tag-page
title:			"All scripts with tag"
date:			2015-05-13
author:			"Arpit Bhayani"
category:		tag
comments:		false
passed-tag:		beautifulsoup4
---


{% for p in site.tags[page.passed-tag] %}
<div class="script-content">
    <div class="script-title">
    	<a href="{{p.url}}" class="new-scripts-link">{{p.title}}</a>
    </div>
    <div class="script-excerpt">
        {{p.short-desc}}
    </div>
    <div class="script-metainfo">
        By
            <a href="{{page.url}}" class="script-page-author">{{p.author}}</a> on
            <emphasis class="date">{{p.date | date: '%B %d, %Y' }}</emphasis>
    </div>
    <div class="script-tags">
        <emphasis class="bold">Tags :&nbsp;</emphasis>
        {% for t in p.tags %}
            <a href="{{ "/tag/" | append: t | replace:" ","-" | prepend: site.baseurl }}" class="tag-link" title="Click to view all posts with tag : {{t}}">{{t}}</a>
        {% endfor %}
    </div>
    
</div>
{% endfor %}