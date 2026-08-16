// यह फ़ंक्शन तब चलेगा जब कोई 'Click Me' बटन दबाएगा
function welcomeMessage() {
    alert("बधाई हो सौरभ! आपका पहला जावास्क्रिप्ट कोड काम कर रहा है।");
}
// यह फ़ंक्शन पूरे पेज का बैकग्राउंड कलर बदल देगा
function changeBackground() {
    // document.body.style.backgroundColor से हम पेज का रंग बदलते हैं
    document.body.style.backgroundColor = "#ffcccc"; // हल्का लाल/गुलाबी रंग
    
    // साथ ही एक छोटा सा अलर्ट भी दिखा देते हैं
    alert("Danger Mode Active! बैकग्राउंड का रंग बदल गया है।");
}
