// HTML के 'बैकग्राउंड बदलें' बटन को उसके ID से सिलेक्ट करना
const bgButton = document.getElementById('colorBtn');

// जब बटन पर क्लिक हो, तब क्या होना चाहिए:
bgButton.addEventListener('click', function() {
    // 5 नए और शानदार ग्रेडिएंट कलर्स की लिस्ट
    const gradients = [
        'linear-gradient(135deg, #ff9966, #ff5e62)', /* हल्का संतरी-लाल */
        'linear-gradient(135deg, #11998e, #38ef7d)', /* सुंदर हरा */
        'linear-gradient(135deg, #7F00FF, #E100FF)', /* जामुनी-गुलाबी */
        'linear-gradient(135deg, #00c6ff, #0072ff)', /* गहरा नीला */
        'linear-gradient(135deg, #74ebd5, #9ecefa)'  /* आपका कल वाला ओरिजिनल कलर */
    ];

    // लिस्ट में से कोई भी एक रैंडम (Random) कलर चुनना
    const randomColor = gradients[Math.floor(Math.random() * gradients.length)];
    
    // पूरे वेबपेज के बैकग्राउंड को नए रंग में बदल देना
    document.body.style.background = randomColor;
});
// थीम बदलने वाले बटन को सिलेक्ट करना
const themeButton = document.getElementById('themeBtn');

// जब थीम बटन पर क्लिक हो, तो डार्क मोड ऑन या ऑफ हो जाए
themeButton.addEventListener('click', function() {
    // यह कोड body में 'dark-mode' क्लास को जोड़ेगा या हटाएगा (Toggle करेगा)
    document.body.classList.toggle('dark-mode');
});
