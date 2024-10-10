
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define PI 3.1415926535
const int N = 10;

void delete_blank_spaces(char *s);

void wind_we(int n, int dc, int dg, int ld);
void rain_we(int n, int dc, int dg, int ld);
void fog_we(int n, int dc, int dg, int ld);
void cloud_we(int n, int dc, int dg, int ld);
void sun_we(int n, int dc, int dg, int ld);

float cal_nep_1bc(int dc);
float cal_nep_1bg(int dg);
float cal_nep_bc(int bc, int dc);
float cal_nep_bg(int bg, int dg);

int cal_ld_1bc(int dc);
int cal_ld_1bg(int dg);
int cal_ld_bc(int bc, int dc);
int cal_ld_bg(int bg, int dg);

bool check_so_ban_be(int a, int b);
bool check_fibonacci(int n);
bool check_square(int n);
bool check_input(int n, int dc, int dg, int ld);
bool check_input_sun_fog(int n, int dc, int dg, int ld);

FILE *fptr_in, *fptr_out;

int main() 
{   
    int n, dc, dg, ld;  

    char we[N];
    char w[] = "Wind";
    char r[] = "Rain";
    char s[] = "Sun";
    char f[] = "Fog";
    char c[] = "Cloud";

    fptr_in = fopen("input.inp", "r");
    fptr_out = fopen("output.out", "w");

    if(fptr_in == NULL)
        exit(1);

    fscanf(fptr_in, "%d %d %d %d %s", &n, &dc, &dg, &ld, we);
    fclose(fptr_in);  

    if(check_input(n, dc, dg, ld))
    {
        if(strcmp(w, we) == 0)
            wind_we(n, dc, dg, ld);
        else if(strcmp(r, we) == 0)
            rain_we(n, dc, dg, ld);
        else if(strcmp(s, we) == 0)
            sun_we(n, dc, dg, ld);
        else if(strcmp(f, we) == 0)
            fog_we(n, dc, dg, ld);
        else if(strcmp(c, we) == 0)
            cloud_we(n, dc, dg, ld);
    }
    else        
        fprintf(fptr_out, "-1 -1 %d", n);

    fclose(fptr_out);

    return 0;
}

/*-------------------------------------------------------------------------------------*/
void wind_we(int n, int dc, int dg, int ld) 
{   

        float nd;
        int bc = n / cal_nep_1bc(dc);
        int bg = n / cal_nep_1bg(dg);

        if(dg == 0)
        {
            bg = 0;
            while(cal_ld_bc(bc, dc) > ld)
                bc--;
        }
        else if(dc == 0)
        {
            bc = 0;
            while(cal_ld_bg(bg, dg) > ld)
                bg--;
        }
        else
        {
            if(cal_ld_bc(bc, dc) > ld)
            {    
                if(cal_nep_1bc(dc) < cal_nep_1bg(dg))
                {
                    bc = (n - cal_nep_bg(bg, dg)) / cal_nep_1bc(dc);
                    while(true)
                    {
                        if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                            bc--;
                        else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                            bg--;
                        else
                            break;
                    }
                    while(true)
                    {
                        if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc) >= 0)
                        {
                            bc += ((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc));
                            break;
                        }                   
                    }
                    while(true)
                    {
                        if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                            bc--;
                        else
                            break;
                    }
                }
                else
                {
                    bg = (n - cal_nep_bc(bc, dc)) / cal_nep_1bg(dg);
                    while(true)
                    {
                        if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                            bg--;
                        else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                            bc--;
                        else 
                            break;
                    }
                    while(true)
                    {
                        if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg) >= 0)
                        {
                            bg += ((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg));
                                break;
                        }                   
                    }
                    while(true)
                    {
                        if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                            bg--;
                        else
                            break;
                    }            
                }
            }
            else
            {
                bg = (n - cal_nep_bc(bc, dc)) / cal_nep_1bg(dg);
                while(true)
                {
                    if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                        bg--;
                    else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                        bc--;
                    else 
                        break;
                }
                while(true)
                {
                    if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg) >= 0)
                    {
                        bg += ((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg));
                            break;
                    }                   
                }
                while(true)
                {
                    if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                        bg--;
                    else
                        break;
                }            
            }
        }
    
        nd = n - bc * cal_nep_1bc(dc) - bg * cal_nep_1bg(dg);
        fprintf(fptr_out, "%d %d %.3f", bc, bg, nd);
}

void rain_we(int n, int dc, int dg, int ld) 
{

        int bc = n / cal_nep_1bc(dc);
        int bg = n / cal_nep_1bg(dg);
        float nd;

        while(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld || cal_nep_bc(bc, dc) + cal_nep_bg(bg, dg) >= n)
        {
            if(bg < bc)
                bc--;
            else
                bg--;
        }

        if(cal_nep_1bg(dg) < cal_nep_1bc(dc))
            bg = (n - cal_nep_bc(bc, dc)) / cal_nep_1bg(dg);
        else
            bc = (n - cal_nep_bg(bg, dg)) / cal_nep_1bc(dc);

        nd = n - bc * cal_nep_1bc(dc) - bg * cal_nep_1bg(dg);

        fprintf(fptr_out,"%d %d %.3f", bc, bg, nd);
}

void sun_we(int n, int dc, int dg, int ld) 
{  
    int g, h;


        float x[10][10] = {{5, 7, 10, 12, 15, 20},
                           {20, 5, 7, 10, 12, 15},
                           {15, 20, 5, 7, 10, 12},
                           {12, 15, 20, 5, 7, 10},
                           {10, 12, 15, 20, 5, 7}};
        
        h = ld % 5;    
        g = dc % 6;

        n += (n * (x[h][g] / 100));
        ld -= (x[h][g] );
    
        int switch_we = (dc + dg) % 3;
 
        if(switch_we == 0) /*RAIN*/
        {   
            char we[] = "Rain";

            fptr_in = fopen("input.inp", "w");
            fprintf(fptr_in, "%d %d %d %d %s", n, dc, dg, ld, we);

            if(check_input_sun_fog(n, dc, dg, ld))
                rain_we(n, dc, dg, ld);        
            else
                fprintf(fptr_out, "-1 -1 %d", n);
            fclose(fptr_in);
        }
        else if(switch_we == 1) /*WIND*/
        {   
            char we[] = "Wind";

            fptr_in = fopen("input.inp", "w");
            fprintf(fptr_in, "%d %d %d %d %s", n, dc, dg, ld, we);

            if(check_input_sun_fog(n, dc, dg, ld))
                wind_we(n, dc, dg, ld);        
            else
                fprintf(fptr_out, "-1 -1 %d", n);
            fclose(fptr_in);
        }
        else if(switch_we == 2) /*CLOUD*/
        {   
            char we[] = "Cloud";

            fptr_in = fopen("input.inp", "w");
            fprintf(fptr_in, "%d %d %d %d %s", n, dc, dg, ld, we);

            if(check_input_sun_fog(n, dc, dg, ld))
                cloud_we(n, dc, dg, ld);        
            else
                fprintf(fptr_out, "-1 -1 %d", n);
            fclose(fptr_in);
        }
}

void fog_we(int n, int dc, int dg, int ld) 
{

        int bc, bg;
        float nd;
      
        if(check_fibonacci(dc) && check_fibonacci(dg))
        {
            dc /= 2;
            dg /= 2;
        }
        else
        {
            dc *= 2;
            dg *= 2;
        }

        bc = n / cal_nep_1bc(dc);
        bg = n / cal_nep_1bg(dg);

        fptr_in = fopen("input.inp", "w");
        fprintf(fptr_in, "%d %d %d %d Fog", n, dc, dg, ld);
        fclose(fptr_in);

        if(dc == 0 && dg == 0)
        {
            dc = -1;
            dg = -1;
        }
        else if(dg == 0)
        {
            bg = 0;
            if(cal_ld_bc(bc, dc) > ld)
                 bc = ld / cal_ld_1bc(dc);
        }
        else if(dc == 0)
        {
            bc = 0;
            if(cal_ld_bg(bg, dg) > ld)
                bg = ld / cal_ld_1bg(dg);
        }
        else
        {
            if(cal_nep_1bc(dc) > cal_nep_1bg(dg))
            {
                bg = (n - cal_nep_bc(bc, dc)) / cal_nep_1bg(dg);
                while(true)
                {
                    if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                        bg--; 
                    else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                        bc--;
                    else 
                        break;
                }
                while(true)
                {                    
                    if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg) >= 0)
                    {
                        bg += (ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg);
                        break;
                    }                   
                }
                while(true)
                {
                    if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                        bg--;
                    else
                        break;
                }           
            }
            else
            {
                bc = (n - cal_nep_bg(bg, dg)) / cal_nep_1bc(dc);
                while(true)
                {
                    if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                        bc--;
                    else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                        bg--;
                    else
                        break;
                }
                while(true)
                {
                    if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc) >= 0)
                    {
                        bc += (ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc);
                        break;
                    }                   
                }
                while(true)
                {
                    if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                        bc--;
                    else
                        break;
                } 
            }          
        }
        if(check_input_sun_fog(n, dc, dg, ld) != 1)
            fprintf(fptr_out, "-1 -1 %d", n);
        else
        {   
            nd = n - bc * cal_nep_1bc(dc) - bg * cal_nep_1bg(dg);
            fprintf(fptr_out,"%d %d %.3f", bc, bg, nd);  
        }


}

void cloud_we(int n, int dc, int dg, int ld) /* 15 16 17*/
{
        float nd; 
        int bc = n / cal_nep_1bc(dc);
        int bg = n / cal_nep_1bg(dg);
           
        if(check_so_ban_be(n, ld))
        {
            bc = 0;
            bg = 0;
        }
        else
        {
            if(dc == 0)
            {   
                bc = 0;
                bg = n / cal_nep_1bg(dg);
                while(cal_nep_bg(bg, dg) > n)
                    bg--;
            }
            else if(dg == 0)
            {
                bg = 0;
                bc = n / cal_nep_1bc(dc);
                while(cal_nep_bc(bc, dc) > n)
                    bc--;
            }
            else
            {
                if(cal_ld_bg(bg, dg) > ld)
                {    
                    if(cal_nep_1bc(dc) > cal_nep_1bg(dg))
                    {
                        bg = (n - cal_nep_bc(bc, dc)) / cal_nep_1bg(dg);
    
                        while(true)
                        {
                            if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bg > 0)
                                bg--; 
                            else if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                                bc--;
                            else 
                                break;
                        }
                        while(true)
                        {                    
                            if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg) >= 0)
                            {
                                bg += (ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bg(dg);
                                break;
                            }                   
                        }
                        while(true)
                        {
                            if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                                  bg--;
                            else
                                break;
                        }
                    }
                    else
                    {
                        bc = (n - cal_nep_bg(bg, dg)) / cal_nep_1bc(dc);
                        while(true)
                        {
                            if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                                bc--;
                            else if(bc * cal_ld_1bc(dc) + bg * cal_ld_1bg(dg) > ld && bg > 0)
                                bg--;
                            else
                                break;
                        }
                        while(true)
                        {
                            if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc) >= 0)
                            {
                                bc += (ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc);
                                break;
                            }                   
                        }
                        while(true)
                        {
                            if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                                bc--;
                            else
                                break;
                        }
                    }
                }
                else
                {
                    bc = (n - cal_nep_bg(bg, dg)) / cal_nep_1bc(dc);
                    while(true)
                    {
                        if(cal_ld_bc(bc, dc) + cal_ld_bg(bg, dg) > ld && bc > 0)
                            bc--;
                        else if(bc * cal_ld_1bc(dc) + bg * cal_ld_1bg(dg) > ld && bg > 0)
                            bg--;
                        else
                            break;
                    }
                    while(true)
                    {
                        if((ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc) >= 0)
                        {
                            bc += (ld - cal_ld_bc(bc, dc) - cal_ld_bg(bg, dg)) / cal_ld_1bc(dc);
                            break;
                        }                   
                    }
                    while(true)
                    {
                        if(cal_nep_bg(bg, dg) + cal_nep_bc(bc, dc) >= n)
                            bc--;
                        else
                            break;
                    }
                }
            }
        }
    
        nd = n - bc * cal_nep_1bc(dc) - bg * cal_nep_1bg(dg);
        fprintf(fptr_out,"%d %d %.3f", bc, bg, nd);
}

/*-------------------------------------------------------------------------------------*/
float cal_nep_1bc(int dc)
{
    float nep_1bc = pow(dc, 2) * sqrt(dc);
    return nep_1bc;     
}

float cal_nep_1bg(int dg)
{
    float nep_1bg = pow(dg, 2) * PI / 3;
    return nep_1bg;        
}

float cal_nep_bc(int bc, int dc)
{
    return bc * cal_nep_1bc(dc);
}

float cal_nep_bg(int bg, int dg)
{
    return bg * cal_nep_1bg(dg);
}

int cal_ld_1bc(int dc)
{
    int ld_1bc = 2;
    if(dc < 8)
        ld_1bc = 1;       
    return ld_1bc;
}

int cal_ld_1bg(int dg)
{
    int ld_1bg = 2;
    if(dg < 5)
        ld_1bg = 1;
    return ld_1bg;      
}

int cal_ld_bc(int bc, int dc)
{
    return bc * cal_ld_1bc(dc);
}

int cal_ld_bg(int bg, int dg)
{
    return bg * cal_ld_1bg(dg);
}

/*-------------------------------------------------------------------------------------*/
bool check_so_ban_be(int a, int b)
{
    int uoc_a = 0, uoc_b = 0;

    int i;
    for(i = 1; i < a; i++)
        if(a %i == 0)
            uoc_a += i;

    for(i = 1; i < b; i++)
        if(b %i == 0)
            uoc_b += i;

    if(uoc_a == b && uoc_b == a)
        return true;
    else 
        return false;
}

bool check_square(int n)
{
    int tmp = sqrt(n);
    return (tmp * tmp == n);
}

bool check_fibonacci(int n)
{
    return check_square(5 * n * n + 4) || check_square(5 * n * n - 4);
}

bool check_input(int n, int dc, int dg, int ld)
{
    if(n < 0 || n > 2000 || dc < 0 || dg < 0 || ld < 1 || ld > 600 || (dc == 0 && dg == 0))
        return false;
    else 
        return true;
}

bool check_input_sun_fog(int n, int dc, int dg, int ld)
{
    if(n < 0 || dc < 0 || dg < 0 || ld < 1 || (dc == 0 && dg == 0))
        return false;
    else 
        return true;
}
/*
349 4 5 112 Rain -> 6 5 26.100
456 2 1 9 Sun -> -1 -1 524
1050 1 1 150 Fog -> -1 -1 1050
1601 5 10 20 Wind -> 0 10 553.802
490 8 3 101 Sun -> 524 8 3 94 Cloud
*/