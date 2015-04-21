window.onload = function(){
  var elements = document.getElementsByClassName("codeville_logo")  
  for (var i=0; i<elements.length; i++){
    elements[i].innerHTML = elements[i].innerHTML.replace(/\b([a-z])/gi, '<span class="first-letter">$1</span>')
  }
  elements = document.getElementsByClassName("codeville_logo_small")  
  for (var i=0; i<elements.length; i++){
    elements[i].innerHTML = elements[i].innerHTML.replace(/\b([a-z])/gi, '<span class="first-letter">$1</span>')
  }
};