#include <allegro.h>
//objetos
struct obj{int wx,wy,x,y,w,h,dir;};
struct obj  p = {5,1,14,23,42,44,4}, f[4],
		frut = {166, 0, 370, 352, 50, 40};

//funções
void sair();
void mapa(int);
void control();
void fant();

//Variáveis Globais
int sai    = 0;
int som	   = 0;
int width  = 1048;
int height = 670;
int pontos = 0;
int map[31][28];
int mov = 0;
int x = 0;

SAMPLE *ponto, *pilula, *start, *macfan, *morto;
BITMAP *buffer, *itens, *fundo;

int main() {
	
    //Iniciação
	allegro_init();
    install_keyboard();
	set_color_depth(32);
	set_window_title("Meu Programa");
	set_close_button_callback(sair);
	install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);  
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, width, height, 0, 0);
	
	//Variáveis Locais
	buffer = create_bitmap(width, height);
	fundo = load_bitmap("../img/fundo.bmp", NULL);
	itens = load_bitmap("../img/itens.bmp", NULL);
	start = load_sample("../sons/start.wav");
	ponto = load_sample("../sons/ponto.wav");
	morto = load_sample("../sons/morto.wav");
	pilula = load_sample("../sons/pilula.wav");
	int i;
	
	for(i = 0; i < 4; i++){
		f[i].wx = 0;
		f[i].wy = 50 + i*31;
		f[i].x  = 12 + i+10;
		f[i].y  = 14;
		f[i].w  = 40;
		f[i].h  = 40;
	    f[i].dir = 1;

}
	
	mapa(1);
	while (!(sai || key[KEY_ESC]))
	{		
		
		draw_sprite(buffer, fundo, 5, 5);
		textprintf_ex(buffer, font, 980, 250, 0xffffff, -1,"%i", pontos);
		control();	
		mapa(0);
		masked_blit(itens, buffer, p.wx + x, p.wy, p.x*28-8, p.y*21-7, p.w, p.h);
		fant();
		draw_sprite(screen, buffer, 0, 0);
		rest(100);
		clear(buffer);	
		//sons
			if(som == 2){stop_sample(ponto); play_sample(ponto, 255, 128, 1000, 0);}	
	   else if(som == 3){play_sample(pilula, 255, 128, 1000, 0);}	
		som = 0;
	}
	
	//Finalização
	
	destroy_bitmap(itens);
	destroy_bitmap(buffer);
	destroy_bitmap(fundo);
	destroy_sample(ponto);
	destroy_sample(morto);
	destroy_sample(start);	
	destroy_sample(pilula);	
	return 0;
}
END_OF_MAIN();

void fant(){
	int i;	
	for(i = 0; i < 4; i++){

	//clyde, fanasma laranja, move-se ao acaso
	///direita///
	if(f[i].dir == 2 && map[f[i].y][f[i].x+1] == 1){
		if(map[f[i].y-1][f[i].x] != 1 && map[f[i].y+1][f[i].x] != 1)
			(rand()%2) ? (f[i].dir = 1) : (f[i].dir = 3);
		else(map[f[i].y-1][f[i].x] != 1) ? (f[i].dir = 1) : (f[i].dir = 3);
	}
	///esquerda///
	if(f[i].dir == 0 && map[f[i].y][f[i].x-1] == 1){
		if(map[f[i].y-1][f[i].x] != 1 && map[f[i].y+1][f[i].x] != 1)
			(rand()%2) ? (f[i].dir = 1) : (f[i].dir = 3);
		else(map[f[i].y-1][f[i].x] != 1) ? (f[i].dir = 1) : (f[i].dir = 3);
	}	
	///baixo///
	if(f[i].dir == 3 && map[f[i].y+1][f[i].x] == 1){
		if(map[f[i].y][f[i].x-1] != 1 && map[f[i].y][f[i].x+1] != 1)
			(rand()%2) ? (f[i].dir = 0) : (f[i].dir = 3);
		else(map[f[i].y][f[i].x-1] != 1) ? (f[i].dir = 0) : (f[i].dir = 2);
	}	
	///cima///
	if(f[i].dir == 1 && map[f[i].y-1][f[i].x] == 1){
		if(map[f[i].y][f[i].x-1] != 1 && map[f[i].y][f[i].x+1] != 1)
			(rand()%2) ? (f[i].dir = 0) : (f[i].dir = 3);
		else(map[f[i].y][f[i].x-1] != 1) ? (f[i].dir = 0) : (f[i].dir = 2);
	}

	     if(f[i].dir == 0 && map[f[i].y][f[i].x-1] != 1) f[i].x--; //esq
	else if(f[i].dir == 1 && map[f[i].y-1][f[i].x] != 1) f[i].y--; //cima
 	else if(f[i].dir == 2 && map[f[i].y][f[i].x+1] != 1) f[i].x++; //dir
	else if(f[i].dir == 3 && map[f[i].y+1][f[i].x] != 1) f[i].y++; //baixo	
		
	//colisão com fantasmas
	if(p.x == f[i].x && p.y == f[i].y ){exit( -1 ); }
		
	masked_blit(itens, buffer, f[i].wx + f[i].dir*36, f[i].wy, f[i].x*28 - 8, f[i].y*21 - 7, f[i].w, f[i].h);
  	}
}

void control(){
	
if (key[KEY_LEFT] && map[p.y][p.x-1] != 1) p.dir = 0;
if (key[KEY_UP]   && map[p.y-1][p.x] != 1) p.dir = 1;
if (key[KEY_RIGHT]&& map[p.y][p.x+1] != 1) p.dir = 2;
if (key[KEY_DOWN] && map[p.y+1][p.x] != 1) p.dir = 3;

if(p.dir == 0 && map[p.y][p.x-1] != 1){p.x--; p.wx = 5;}
if(p.dir == 1 && map[p.y-1][p.x] != 1){p.y--;}
if(p.dir == 2 && map[p.y][p.x+1] != 1){p.x++; p.wx = 38;}
if(p.dir == 3 && map[p.y+1][p.x] != 1){p.y++;}

	//abrindo e fechando a boca
	if(mov >4){x = 0; mov = 0;}	
	if(mov++ > 1){x = 30;}

	//atravessando a tela
	if(p.x > 26 && p.dir) p.x=0;
	if(p.x < 1 && !p.dir) p.x = 27;
	
	// recolhe objetos
	if(map[p.y][p.x] == 2){pontos++  ; som = 2; map[p.y][p.x] = 0;}
	if(map[p.y][p.x] == 3){pontos+= 120; som = 3; map[p.y][p.x] = 0;}
}
void mapa (int mod){
	int i, j;
	
	char mp[31][28] ={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,1},
					  {1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1},
					  {1,3,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,3,1},
					  {1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1},
					  {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1},
					  {1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,2,1},
					  {1,2,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,2,1},
					  {1,2,2,2,2,2,2,1,1,2,2,2,2,1,1,2,2,2,2,1,1,2,2,2,2,2,2,1},
					  {1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,2,2,2,2,2,2,2,2,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {0,0,0,0,0,0,2,2,2,2,1,1,1,1,1,1,1,1,2,2,2,2,0,0,0,0,0,0},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,2,2,2,2,2,2,2,2,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1},
					  {1,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,1},
					  {1,2,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,2,1},
					  {1,3,1,1,1,1,2,1,1,1,1,1,2,1,1,2,1,1,1,1,1,2,1,1,1,1,3,1},
					  {1,2,2,2,1,1,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,1,1,2,2,2,1},
					  {1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1},
					  {1,1,1,2,1,1,2,1,1,2,1,1,1,1,1,1,1,1,2,1,1,2,1,1,2,1,1,1},
					  {1,2,2,2,2,2,2,1,1,2,2,2,2,1,1,2,2,2,2,1,1,2,2,2,2,2,2,1},
					  {1,2,1,1,1,1,1,1,1,1,1,1,3,1,1,3,1,1,1,1,1,1,1,1,1,1,2,1},
	                  {1,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,2,1},
	                  {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1},
	                  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
	
	for(i=0;i<31;i++){
		for(j=0;j<28;j++){
			if(mod) map[i][j] = mp[i][j];
			if(map[i][j] == 2) masked_blit(itens, buffer, 25, 20, j*28 + 10, i*21+16, 6, 6); //pontos
			if(map[i][j] == 3 && mov < 3) masked_blit(itens, buffer, 840, 635, j*28 + 3, i*21+10, 18, 18); //pontos

		}
	}
}
void sair(){sai= 1;}
END_OF_FUNCTION(sair);
