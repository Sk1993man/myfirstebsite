#include <stdio.h>

int main() {
    int a, b, sum;

    // यूज़र से पहला नंबर मांगना
    printf("Pehla number enter karein: ");
    scanf("%d", &a); // यह आपकी कीबोर्ड एंट्री को 'a' में सेव करेगा

    // यूज़र से दूसरा नंबर मांगना
    printf("Doosra number enter karein: ");
    scanf("%d", &b); // यह आपकी कीबोर्ड एंट्री को 'b' में सेव करेगा

    // दोनों को जोड़ना
    sum = a + b;

    // रिजल्ट दिखाना
    printf("Aapke dono numbers ka total hai: %d\n", sum);

        // --- यहाँ से आपका नया Even/Odd चेक करने का कोड शुरू होता है ---
    int check_number;

    printf("\nअब एक नया नंबर डालें (Even/Odd चेक करने के लिए): ");
    scanf("%d", &check_number);

    // if-else कंडीशन का उपयोग
    if (check_number % 2 == 0) {
        printf("%d ek EVEN (सम) number hai.\n", check_number);
    } else {
        printf("%d ek ODD (विषम) number hai.\n", check_number);
    }

       // --- यहाँ से आपका Switch Case वाला Calculator कोड शुरू होता है ---
    char operation;
    double num1, num2, result;

    printf("\n--- MINI CALCULATOR ---\n");
    printf("Operation chunein (+, -, *, /): ");
    // %c से पहले एक स्पेस ज़रूरी है ताकि पिछला Enter साफ़ हो जाए
    scanf(" %c", &operation); 

    printf("Do numbers enter karein: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch Case का उपयोग
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Zero se bhaag (divide) nahi kar sakte.\n");
            }
            break;
        default:
            printf("Galat operation! Kripya +, -, *, ya / hi chunein.\n");
    }

       // --- यहाँ से आपका पहाड़ा (Table) प्रिंट करने का कोड शुरू होता है ---
    int table_number;

    printf("\n--- PAHADA (TABLE) GENERATOR ---\n");
    printf("Kis number ka pahada chahiye? ");
    scanf("%d", &table_number);

    printf("\n%d ka pahada niche hai:\n", table_number);
    
    // for लूप: यह 1 से शुरू होकर 10 तक चलेगा (i++ का मतलब है एक-एक आगे बढ़ना)
    for (int i = 1; i <= 10; i++) {
        // table_number को i से गुणा करके प्रिंट करना
        printf("%d x %d = %d\n", table_number, i, table_number * i);
    }
    // --- यहाँ से आपका गिनती (Counting) प्रिंट करने का कोड शुरू होता है ---
    int limit;

    printf("\n--- GINTI (COUNTING) GENERATOR ---\n");
    printf("Aapko kahaan tak ginti chahiye? (जैसे 50 या 100): ");
    scanf("%d", &limit);

    printf("\n1 se %d tak ki ginti niche hai:\n", limit);
    
    // for लूप: यह 1 से शुरू होगा और आपके दिए गए नंबर (limit) तक चलेगा
    for (int i = 1; i <= limit; i++) {
        printf("%d ", i); // \n की जगह स्पेस दिया है ताकि गिनती एक ही लाइन में आए
    }
    printf("\n"); // गिनती पूरी होने के बाद लाइन बदलने के लिए

    return 0; 
}
