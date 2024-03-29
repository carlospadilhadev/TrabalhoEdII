#pragma once
#include <time.h>

// Constantes
#define n 100000

// Vari�veis globais
char *tipoBusca;
long int contBuscas;
double buscaBinariaTempoExecucao, buscaSequencialTempoExecucao;

// Estruturas de dados
typedef struct {
	long int codigo;
	char nome[50];
	char email[50];
	char senha[30];
} TUsuario;


// Algoritmos de ordena��o
void bubbleSort(TUsuario* vet);
void insertionSort(TUsuario* vet);
void selectionSort(TUsuario* vet);
void shellSort(TUsuario* vet);
void merge(TUsuario* vet, int p, int q, int r);
void mergeSort(TUsuario* vet, int p, int r);
void heapSort(TUsuario* vet);
void criaHeap(TUsuario* vet, long int i, long int f);
void quickSort(TUsuario* vet, long int p, long int r);
int Particiona(TUsuario* vet, long int p, long int r);

//Algoritmos de busca
long int busca_Sequencial(TUsuario *vetor, long int chave);
long int busca_Binaria(TUsuario *vetor, long int chave);

// Fun��es de apoio
void escreveVetor(TUsuario vet[]);
void imprimiVetor(TUsuario vet[], long int inicio, long int fim);

// Manipulador de dados
void escreverArquivos(TUsuario *vet);
void leitorArquivos(TUsuario *vet);
void criaArquivos();
void criaCodigo(TUsuario *vet);
void criaDadosVetor(TUsuario *vet);
void encheVetor(TUsuario *vet);
void escreveSaida();

//Fun��es que calcularam o tempo de execu��o
void calculadorPricipal(TUsuario *vet);
void calculaBubble(TUsuario *vet);
void calculaSelection(TUsuario *vet);
void calculaInsertion(TUsuario *vet);
void calculaShell(TUsuario *vet);
void calculaMerge(TUsuario *vet);
void calculaHeap(TUsuario *vet);
void calculaQuick(TUsuario *vet);
long int geraChave();
