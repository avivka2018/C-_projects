#ifndef CONFIGURATIONMANEGER_H
#define CONFIGURATIONMANEGER_H

class configurationManeger {
public:
    configurationManeger(FILE * config);
    ~configurationManeger();
    int loadConfiguration (FILE * config);
    int saveConfiguration (FILE * config);
    int shutdown();

private:
    FILE * fileName;
    configurationManeger(const configurationManeger& configurationManeger);
    configurationManeger& operator=(const configurationManeger& configurationManeger);
    }

};

#endif // CONFIGURATIONMANEGER_H
