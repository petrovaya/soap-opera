#ifndef SOAP_OPERA_SIMULATOR_H
#define SOAP_OPERA_SIMULATOR_H

class SoapOperaSimulator {
private:
    SoapOpera *soapOperas[];

public:
    SoapOpera* generateSoapOpera();
    void deleteSoapOpera(SoapOpera *so);
};

#endif
