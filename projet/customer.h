#ifndef FINAL_CUSTOMER_H
#define FINAL_CUSTOMER_H

    struct Customer {
        int  id;
        char lastname[50];
        char firstname[50];
        char profession[50];
        char phone[11];
    };
    typedef struct Customer Customer;

    void createCustomer(struct Customer *customer);
    void displayCustomer(struct Customer *customer);

    void updateCustomer(struct Customer *customer);
    void displayHistoriesByCustomer(struct Customer *customer);
#endif //FINAL_CUSTOMER_H
