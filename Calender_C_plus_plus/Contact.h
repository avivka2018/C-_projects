#ifndef CONTACT_H
#define CONTACT_H


class Contact {
public:
    Contact ( const string& m_pName, const string& m_uName, const string& phone);
    ~Contact();
    int contactUpdate(const string& m_pName,const string& m_uName, const string& phone);

private:
    string m_pName;
    string m_uName; // fix
    string m_phone;

    Contact(const contact& contact);
    Contact& operator=(const contact& contact);

};
#endif // CONTACT_H
