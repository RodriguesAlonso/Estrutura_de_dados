class Cidades
{
private:
    
    int ano; //ano de origem.
    int populacao;
    
public:
    Cidades(int ano, int populacao);
    

    void setAno(int ano);
    void setPopulacao(int populacao);

    int getAno();
    int getPopulacao();
    

    void print();
};
