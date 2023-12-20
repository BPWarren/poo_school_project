class Alimentaire : public Article{
    protected:
        Date date_expiration;
    public:
        Alimentaire(string, string, float, Date);
        Alimentaire();
        ~Alimentaire();
        Alimentaire(const Alimentaire &);
        void remplir() override;
        Date getDateExpiration();
        void setDateExpiration(Date new_date);
        Alimentaire & operator=(const Alimentaire &);
};