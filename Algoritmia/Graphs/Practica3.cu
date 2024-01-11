//Programa que transfiere datos desde la memoria del host a la  memoria del device usando las funciones de manejo de memoria de CDUA
//Compilar: nvcc 03_mem.cu -o 01_mem.x                                                                                                                                    */                                                                                                                                                                      
#include <stdio.h>                                                                                                                                                      
#include <stdlib.h>                                                                                                                                                     
#include <cuda_runtime.h>                                                                                                                                               
#define N 10                                                                                                                                                            
#define forn(i,n) for(int i=0; i<n; i++)                                                                                                                                                                                                                                                                                                        
__global__ void imprime(float *arreglo, int a){                                                                                                                             
    int i=threadIdx.x + blockIdx.x*blockDim.x;                                                                                                                              
    if(i>=N*N) return ;                                                                                                                                                     
    arreglo[i]+=a;                                                                                                                                                          
    //printf("Arreglo %d = %f\n", i,arreglo[i]);                                                                                                                        
    }                                                                                                                                                                                                                                                                                                                                               
    // Función principal ejecutada en el host                                                                                                                               
    int main(int argc, char** argv){                                                                                                                                                                           
        // Declaración de variables                                                                                                                                             
        float *m_host;                                                                                                                                                          
        float *m_device;                                                                                                                                                                                                                                                                                                                                
        // Reservar memoria en el host                                                                                                                                          
        // m_host = (float *) malloc ( N * N * sizeof(float) );                                                                                                                 
        m_host = new float(N*N);                                                                                                                                                                                                                                                                                                                        
        // Reservar memoria en el device                                                                                                                                        
        cudaMalloc( (void**) &m_device, N * N * sizeof(float) );                                                                                                                                                                                                                                                                                        
        // Inicializar la matriz                                                                                                                                                
        for (int i = 0; i < N * N; i++)                                                                                                                                             
        m_host[i] = (float) ( rand() % 10 );                                                                                                                                                                                                                                                                                                        
        //printf("Hola %f\n", m_host[100*100]);                                                                                                                                 
        // Copiar información al device                                                                                                                                         
        cudaMemcpy(m_device, m_host, N * N * sizeof(float), cudaMemcpyHostToDevice);                                                                                            
        int b=(N*N/1024) + 1;                                                                                                                                                   
        imprime<<<b,1024>>>(m_device,8);                                                                                                                                        
        cudaMemcpy(m_host, m_device, N * N * sizeof(float), cudaMemcpyDeviceToHost);                                                                                            
        forn(i,N*N)                                                                                                                                                                 
        printf("Arreglo %d = %f\n", i, m_host[i]);                                                                                                                                                                                                                                                                                                  
        // Liberar memoria                                                                                                                                                      
        cudaFree( m_device );                                                                                                                                                   
        printf("\nPulsa INTRO para finalizar...");                                                                                                                              
        fflush(stdin);                                                                                                                                                          
        char tecla = getchar();                                                                                                                                                 
        return 0;                                                                                                                                                           } 


