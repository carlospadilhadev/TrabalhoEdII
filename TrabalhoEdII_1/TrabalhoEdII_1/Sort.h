#pragma once

// Constantes
#define n 100000

// Vari�veis globais
char args[30];
long int tempoExecucao, buscaBinariaTempoExecucao, buscaSequencialTempoExecucao;

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

// Fun��es de apoio
void escreveVetor(TUsuario vet[]);
void imprimiVetor(TUsuario vet[]);

// Manipulador de dados
void escreverArquivos(TUsuario *vet);
void leitorArquivos(TUsuario *vet);
void criaArquivos();
void criaCodigo(TUsuario *vet);
void criaDadosVetor(TUsuario *vet);
void encheVetor(TUsuario *vet);

//Fun��es que calcularam o tempo de execu��o
void calculadorPricipal(TUsuario *vet);
void calculaBubble(TUsuario *vet);
void calculaSelection(TUsuario *vet);
void calculaInsertion(TUsuario *vet);
void calculaShell(TUsuario *vet);
void calculaMerge(TUsuario *vet);
void calculaHeap(TUsuario *vet);
void calculaQuick(TUsuario *vet);
