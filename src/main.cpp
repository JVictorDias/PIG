
#include "PIG.h"

int main(int argc, char* args[])
{
    PIG_criarJanela("Janela", 800, 800);

    while(PIG_jogoRodando() == 1)
    {
        PIG_atualizarJanela();

        PIG_iniciarDesenho();
        PIG_encerrarDesenho();
    }

    PIG_finalizarJanela();

    return 0;
}



