#ifndef INVOICE_H
#define INVOICE_H

class Invoice {
    private:
        int invoiceId();
        int dollarsOwed();
    public:
        Invoice(invoiceId);
        int addServiceCost(costDollars);
        int getDollarsOwed();
        int getInvoiceId();
};
#endif