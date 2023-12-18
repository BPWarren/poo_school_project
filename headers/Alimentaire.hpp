class Alimentaire : public Article{
    private:
        Date date_expiration;
    public:
        Alimentaire(string, string, float, Date);
        ~Alimentaire();
        Alimentaire(const Alimentaire &);
        
        Date getDateExpiration();
        void setDateExpiration(Date new_date);
};