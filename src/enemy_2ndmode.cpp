#include "header.h"
struct animal enemy[5];

void spirit_sprite()
{
    int width, height;
    SDL_QueryTexture(spirit, NULL, NULL, &width, &height);

    spirit_spriteclips[0].x = 0;
    spirit_spriteclips[0].y = 0;
    spirit_spriteclips[0].w = width / 6;
    spirit_spriteclips[0].h = height;

    spirit_spriteclips[1].x = 0;
    spirit_spriteclips[1].y = 0;
    spirit_spriteclips[1].w = width / 6;
    spirit_spriteclips[1].h = height;

    spirit_spriteclips[2].x = 0;
    spirit_spriteclips[2].y = 0;
    spirit_spriteclips[2].w = width / 6;
    spirit_spriteclips[2].h = height;

    spirit_spriteclips[3].x = width - (width / 6) * 5;
    spirit_spriteclips[3].y = 0;
    spirit_spriteclips[3].w = width / 6;
    spirit_spriteclips[3].h = height;

    spirit_spriteclips[4].x = width - (width / 6) * 5;
    spirit_spriteclips[4].y = 0;
    spirit_spriteclips[4].w = width / 6;
    spirit_spriteclips[4].h = height;

    spirit_spriteclips[5].x = width - (width / 6) * 5;
    spirit_spriteclips[5].y = 0;
    spirit_spriteclips[5].w = width / 6;
    spirit_spriteclips[5].h = height;

    spirit_spriteclips[6].x = width - (width / 6) * 4;
    spirit_spriteclips[6].y = 0;
    spirit_spriteclips[6].w = width / 6;
    spirit_spriteclips[6].h = height;

    spirit_spriteclips[7].x = width - (width / 6) * 4;
    spirit_spriteclips[7].y = 0;
    spirit_spriteclips[7].w = width / 6;
    spirit_spriteclips[7].h = height;

    spirit_spriteclips[8].x = width - (width / 6) * 4;
    spirit_spriteclips[8].y = 0;
    spirit_spriteclips[8].w = width / 6;
    spirit_spriteclips[8].h = height;

    spirit_spriteclips[9].x = width - (width / 6) * 3;
    spirit_spriteclips[9].y = 0;
    spirit_spriteclips[9].w = width / 6;
    spirit_spriteclips[9].h = height;

    spirit_spriteclips[10].x = width - (width / 6) * 3;
    spirit_spriteclips[10].y = 0;
    spirit_spriteclips[10].w = width / 6;
    spirit_spriteclips[10].h = height;

    spirit_spriteclips[11].x = width - (width / 6) * 3;
    spirit_spriteclips[11].y = 0;
    spirit_spriteclips[11].w = width / 6;
    spirit_spriteclips[11].h = height;

    spirit_spriteclips[12].x = width - (width / 6) * 2;
    spirit_spriteclips[12].y = 0;
    spirit_spriteclips[12].w = width / 6;
    spirit_spriteclips[12].h = height;

    spirit_spriteclips[13].x = width - (width / 6) * 2;
    spirit_spriteclips[13].y = 0;
    spirit_spriteclips[13].w = width / 6;
    spirit_spriteclips[13].h = height;

    spirit_spriteclips[14].x = width - (width / 6) * 2;
    spirit_spriteclips[14].y = 0;
    spirit_spriteclips[14].w = width / 6;
    spirit_spriteclips[14].h = height;

    spirit_spriteclips[15].x = width - (width / 6) * 1;
    spirit_spriteclips[15].y = 0;
    spirit_spriteclips[15].w = width / 6;
    spirit_spriteclips[15].h = height;

    spirit_spriteclips[16].x = width - (width / 6) * 1;
    spirit_spriteclips[16].y = 0;
    spirit_spriteclips[16].w = width / 6;
    spirit_spriteclips[16].h = height;

    spirit_spriteclips[17].x = width - (width / 6) * 1;
    spirit_spriteclips[17].y = 0;
    spirit_spriteclips[17].w = width / 6;
    spirit_spriteclips[17].h = height;
}

void zombie_sprite()
{
    int width, height;
    SDL_QueryTexture(enemy_zombie, NULL, NULL, &width, &height);

    zombie_spriteclips[0].x = 0;
    zombie_spriteclips[0].y = 0;
    zombie_spriteclips[0].w = width / 6;
    zombie_spriteclips[0].h = height;

    zombie_spriteclips[1].x = 0;
    zombie_spriteclips[1].y = 0;
    zombie_spriteclips[1].w = width / 6;
    zombie_spriteclips[1].h = height;

    zombie_spriteclips[2].x = 0;
    zombie_spriteclips[2].y = 0;
    zombie_spriteclips[2].w = width / 6;
    zombie_spriteclips[2].h = height;

    zombie_spriteclips[3].x = width - (width / 6) * 5;
    zombie_spriteclips[3].y = 0;
    zombie_spriteclips[3].w = width / 6;
    zombie_spriteclips[3].h = height;

    zombie_spriteclips[4].x = width - (width / 6) * 5;
    zombie_spriteclips[4].y = 0;
    zombie_spriteclips[4].w = width / 6;
    zombie_spriteclips[4].h = height;

    zombie_spriteclips[5].x = width - (width / 6) * 5;
    zombie_spriteclips[5].y = 0;
    zombie_spriteclips[5].w = width / 6;
    zombie_spriteclips[5].h = height;

    zombie_spriteclips[6].x = width - (width / 6) * 4;
    zombie_spriteclips[6].y = 0;
    zombie_spriteclips[6].w = width / 6;
    zombie_spriteclips[6].h = height;

    zombie_spriteclips[7].x = width - (width / 6) * 4;
    zombie_spriteclips[7].y = 0;
    zombie_spriteclips[7].w = width / 6;
    zombie_spriteclips[7].h = height;

    zombie_spriteclips[8].x = width - (width / 6) * 4;
    zombie_spriteclips[8].y = 0;
    zombie_spriteclips[8].w = width / 6;
    zombie_spriteclips[8].h = height;

    zombie_spriteclips[9].x = width - (width / 6) * 3;
    zombie_spriteclips[9].y = 0;
    zombie_spriteclips[9].w = width / 6;
    zombie_spriteclips[9].h = height;

    zombie_spriteclips[10].x = width - (width / 6) * 3;
    zombie_spriteclips[10].y = 0;
    zombie_spriteclips[10].w = width / 6;
    zombie_spriteclips[10].h = height;

    zombie_spriteclips[11].x = width - (width / 6) * 3;
    zombie_spriteclips[11].y = 0;
    zombie_spriteclips[11].w = width / 6;
    zombie_spriteclips[11].h = height;

    zombie_spriteclips[12].x = width - (width / 6) * 2;
    zombie_spriteclips[12].y = 0;
    zombie_spriteclips[12].w = width / 6;
    zombie_spriteclips[12].h = height;

    zombie_spriteclips[13].x = width - (width / 6) * 2;
    zombie_spriteclips[13].y = 0;
    zombie_spriteclips[13].w = width / 6;
    zombie_spriteclips[13].h = height;

    zombie_spriteclips[14].x = width - (width / 6) * 2;
    zombie_spriteclips[14].y = 0;
    zombie_spriteclips[14].w = width / 6;
    zombie_spriteclips[14].h = height;

    zombie_spriteclips[15].x = width - (width / 6) * 1;
    zombie_spriteclips[15].y = 0;
    zombie_spriteclips[15].w = width / 6;
    zombie_spriteclips[15].h = height;

    zombie_spriteclips[16].x = width - (width / 6) * 1;
    zombie_spriteclips[16].y = 0;
    zombie_spriteclips[16].w = width / 6;
    zombie_spriteclips[16].h = height;

    zombie_spriteclips[17].x = width - (width / 6) * 1;
    zombie_spriteclips[17].y = 0;
    zombie_spriteclips[17].w = width / 6;
    zombie_spriteclips[17].h = height;
}

void ghost_sprite()
{
    int width, height;

    SDL_QueryTexture(enemy_ghost, NULL, NULL, &width, &height);

    ghost_spriteclips[0].x = 0;
    ghost_spriteclips[0].y = 0;
    ghost_spriteclips[0].w = width / 3 - 50;
    ghost_spriteclips[0].h = height;

    ghost_spriteclips[1].x = 0;
    ghost_spriteclips[1].y = 0;
    ghost_spriteclips[1].w = width / 3 - 50;
    ghost_spriteclips[1].h = height;

    ghost_spriteclips[2].x = 0;
    ghost_spriteclips[2].y = 0;
    ghost_spriteclips[2].w = width / 3 - 50;
    ghost_spriteclips[2].h = height;

    ghost_spriteclips[3].x = 0;
    ghost_spriteclips[3].y = 0;
    ghost_spriteclips[3].w = width / 3 - 50;
    ghost_spriteclips[3].h = height;

    ghost_spriteclips[4].x = 0;
    ghost_spriteclips[4].y = 0;
    ghost_spriteclips[4].w = width / 3 - 50;
    ghost_spriteclips[4].h = height;

    ghost_spriteclips[5].x = 0;
    ghost_spriteclips[5].y = 0;
    ghost_spriteclips[5].w = width / 3 - 50;
    ghost_spriteclips[5].h = height;

    ghost_spriteclips[6].x = width - (width / 3) * 2;
    ghost_spriteclips[6].y = 0;
    ghost_spriteclips[6].w = width / 3 - 50;
    ghost_spriteclips[6].h = height;

    ghost_spriteclips[7].x = width - (width / 3) * 2;
    ghost_spriteclips[7].y = 0;
    ghost_spriteclips[7].w = width / 3 - 50;
    ghost_spriteclips[7].h = height;

    ghost_spriteclips[8].x = width - (width / 3) * 2;
    ghost_spriteclips[8].y = 0;
    ghost_spriteclips[8].w = width / 3 - 50;
    ghost_spriteclips[8].h = height;

    ghost_spriteclips[9].x = width - (width / 3) * 2;
    ghost_spriteclips[9].y = 0;
    ghost_spriteclips[9].w = width / 3 - 50;
    ghost_spriteclips[9].h = height;

    ghost_spriteclips[10].x = width - (width / 3) * 2;
    ghost_spriteclips[10].y = 0;
    ghost_spriteclips[10].w = width / 3 - 50;
    ghost_spriteclips[10].h = height;

    ghost_spriteclips[11].x = width - (width / 3) * 2;
    ghost_spriteclips[11].y = 0;
    ghost_spriteclips[11].w = width / 3 - 50;
    ghost_spriteclips[11].h = height;

    ghost_spriteclips[12].x = width - (width / 3) * 1;
    ghost_spriteclips[12].y = 0;
    ghost_spriteclips[12].w = width / 3 - 50;
    ghost_spriteclips[12].h = height;

    ghost_spriteclips[13].x = width - (width / 3) * 1;
    ghost_spriteclips[13].y = 0;
    ghost_spriteclips[13].w = width / 3 - 50;
    ghost_spriteclips[13].h = height;

    ghost_spriteclips[14].x = width - (width / 3) * 1;
    ghost_spriteclips[14].y = 0;
    ghost_spriteclips[14].w = width / 3 - 50;
    ghost_spriteclips[14].h = height;

    ghost_spriteclips[15].x = width - (width / 3) * 1;
    ghost_spriteclips[15].y = 0;
    ghost_spriteclips[15].w = width / 3 - 50;
    ghost_spriteclips[15].h = height;

    ghost_spriteclips[16].x = width - (width / 3) * 1;
    ghost_spriteclips[16].y = 0;
    ghost_spriteclips[16].w = width / 3 - 50;
    ghost_spriteclips[16].h = height;

    ghost_spriteclips[17].x = width - (width / 3) * 1;
    ghost_spriteclips[17].y = 0;
    ghost_spriteclips[17].w = width / 3 - 50;
    ghost_spriteclips[17].h = height;
}

void setup_enemy()
{
    enemy[SPIRIT].body.x = 800;
    enemy[SPIRIT].body.y = 620;
    enemy[SPIRIT].body.w = 120;
    enemy[SPIRIT].body.h = 160;
    enemy[SPIRIT].speed = 0;
    enemy[SPIRIT].lives = 1;

    enemy[ZOMBIE].body.x = 1200;
    enemy[ZOMBIE].body.y = 620;
    enemy[ZOMBIE].body.w = 120;
    enemy[ZOMBIE].body.h = 160;
    enemy[ZOMBIE].speed = 0;
    enemy[ZOMBIE].lives = 1;

    enemy[GHOST].body.x = 1600;
    enemy[GHOST].body.y = 600;
    enemy[GHOST].body.w = 150;
    enemy[GHOST].body.h = 190;
    enemy[GHOST].speed = 0;
    enemy[GHOST].lives = 2;
}

void Killing_Enemy(SDL_Rect oponent, int a, SDL_Rect star)
{
    int i, j;

    bool done = false;

    for (i = indicator.start; i < indicator.finish; i++)
    {
        if (knife[i].hit.x >= oponent.x && knife[i].hit.x <= oponent.x + oponent.w && knife[i].hit.y + knife[i].hit.h > oponent.y)
        {

            SDL_Rect temp;
            temp.x = knife[i].hit.x;
            temp.y = knife[i].hit.y;
            temp.w = 100;
            temp.h = 100;

            if (a == SPIRIT)
            {
                Mix_PlayChannel(-1, spiritsound, 0);
                score = score + 15;
                OBSTACLES_AND_COIN_POSITION(&enemy[SPIRIT].body.x, &enemy[SPIRIT].body.w, &star.x, &star.w, &enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, &enemy[GHOST].body.x, &enemy[GHOST].body.w, 1500, true);
            }
            else if (a == ZOMBIE)
            {
                Mix_PlayChannel(-1, zombiesound, 0);
                if (!(--enemy[ZOMBIE].lives))
                {
                    score = score + 20;
                    enemy[ZOMBIE].lives = 2;
                    OBSTACLES_AND_COIN_POSITION(&enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, &star.x, &star.w, &enemy[SPIRIT].body.x, &enemy[0].body.w, &enemy[GHOST].body.x, &enemy[GHOST].body.w, 1500, true);
                }
            }
            else if (a == GHOST)
            {
                Mix_PlayChannel(-1, zombiesound, 0);
                if (!(--enemy[GHOST].lives))
                {
                    score = score + 30;
                    enemy[GHOST].lives = 3;
                    OBSTACLES_AND_COIN_POSITION(&enemy[GHOST].body.x, &enemy[GHOST].body.w, &star.x, &star.w, &enemy[SPIRIT].body.x, &enemy[SPIRIT].body.w, &enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, 1500, true);
                }
            }

            for (j = i; j < indicator.finish - 1; j++)
            {
                knife[j].hit.x = knife[j + 1].hit.x;
                knife[j].hit.y = knife[j + 1].hit.y;
            }

            knife[j].hit.x = 150;
            indicator.finish--;
            done = true;
        }

        if (done == true)
        {
            break;
        }
    }
}

void enemies()
{
    enemy[SPIRIT].body.x -= 8;
    if (enemy[SPIRIT].body.x + enemy[SPIRIT].body.w <= 0)
    {
        OBSTACLES_AND_COIN_POSITION(&enemy[SPIRIT].body.x, &enemy[SPIRIT].body.w, &star.x, &star.w, &enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, &enemy[GHOST].body.x, &enemy[GHOST].body.w, 1250, true);
    }

    enemy[ZOMBIE].body.x -= 8;
    if (enemy[ZOMBIE].body.x + enemy[ZOMBIE].body.w <= 0)
    {
        OBSTACLES_AND_COIN_POSITION(&enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, &star.x, &star.w, &enemy[SPIRIT].body.x, &enemy[0].body.w, &enemy[GHOST].body.x, &enemy[GHOST].body.w, 1250, true);
        enemy[ZOMBIE].lives = 2;
    }

    enemy[GHOST].body.x -= 8;
    if (enemy[GHOST].body.x + enemy[GHOST].body.w <= 0)
    {
        OBSTACLES_AND_COIN_POSITION(&enemy[GHOST].body.x, &enemy[GHOST].body.w, &star.x, &star.w, &enemy[SPIRIT].body.x, &enemy[SPIRIT].body.w, &enemy[ZOMBIE].body.x, &enemy[ZOMBIE].body.w, 1250, true);
        enemy[GHOST].lives = 3;
    }

    Killing_Enemy(enemy[SPIRIT].body, SPIRIT, star);
    Killing_Enemy(enemy[ZOMBIE].body, ZOMBIE, star);
    Killing_Enemy(enemy[GHOST].body, GHOST, star);

    if (x_pos + 35 >= enemy[SPIRIT].body.x && x_pos + 35 <= enemy[SPIRIT].body.x + enemy[SPIRIT].body.w && !((y_pos + 115) < 380))
    {

        alive--;
        if (score >= 15 && alive > 1)
            score = score - 15;
        if (alive > 0)
        {
            Mix_PlayChannel(-1, collidesound, 0);
            x_pos = x_pos + enemy[SPIRIT].body.w;
        }
    }

    if (x_pos + 35 >= enemy[ZOMBIE].body.x && x_pos + 35 <= enemy[ZOMBIE].body.x + enemy[ZOMBIE].body.w && !((y_pos + 115) < 380))
    {

        alive--;
        if (score >= 20 && alive > 1)
            score = score - 20;
        if (alive > 0)
        {
            Mix_PlayChannel(-1, collidesound, 0);
            x_pos = x_pos + enemy[ZOMBIE].body.w;
        }
    }

    if (x_pos + 35 >= enemy[GHOST].body.x && x_pos + 35 <= enemy[GHOST].body.x + enemy[GHOST].body.w && !((y_pos + 145) < 320))
    {

        alive--;
        if (score >= 30 && alive > 1)
            score = score - 30;
        if (alive > 0)
        {
            Mix_PlayChannel(-1, collidesound, 0);
            x_pos = x_pos + enemy[GHOST].body.w;
        }
    }
}
