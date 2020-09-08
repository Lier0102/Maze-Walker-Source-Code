void OptionMenu(){
    while(1){
        BeginDrawing();
            BeginMode2D(camera);
                ClearBackground(BLACK);
                DrawTexture(MainMenuTile, GameScreenStart[0], GameScreenStart[1], WHITE);
                DrawText("Options", 50 + GameScreenStart[0], 50 + GameScreenStart[1], 180, BLACK);
                if((GetMouseX() > 550) && (GetMouseX() < 750) && (GetMouseY() > 635) && (GetMouseY() < 670)){
                    DrawRectangle(550, 635, 200, 35, GREEN);
                    if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){break;}
                }else{DrawRectangle(550, 635, 200, 35, WHITE);} 
                DrawText("Back", 555, 635, 35, BLACK);
            EndMode2D();
        EndDrawing();
    }
}

void MainMenu(){
    ClearBackground(BLACK);
    DrawTexture(MainMenuTile, GameScreenStart[0], GameScreenStart[1], WHITE);
    DrawText("Maze", 160 + GameScreenStart[0], 50 + GameScreenStart[1], 180, BLACK);
    DrawText("Walker", 90 + GameScreenStart[0], 190 + GameScreenStart[1], 180, BLACK);
    DrawText("Walk Your Way To Freedom", 50 + GameScreenStart[0], 350 + GameScreenStart[1], 50, BLACK);
    bool ContinueExists = false;
    if(FileExists("storage.data")){ContinueExists = true;}
    if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 435) && (GetMouseY() < 470)){
        DrawRectangle(300, 435, 200, 35, GREEN);
        if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){
            CurrentLevel = 1;
            Timer[0] = 0;
            Timer[1] = 0;
            Timer[2] = 0;
            Timer[3] = 0;
            SaveSave();
            StartGame = true;
        }
    }else{DrawRectangle(300, 435, 200, 35, WHITE);}
    DrawText("New Game", 305, 435, 35, BLACK);
    if(ContinueExists == true){
        if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 475) && (GetMouseY() < 510)){
            DrawRectangle(300, 475, 200, 35, GREEN);
            if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){StartGame = true;}
        }else{DrawRectangle(300, 475, 200, 35, WHITE);} 
        if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 515) && (GetMouseY() < 550)){
            DrawRectangle(300, 515, 200, 35, GREEN);
            if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){OptionMenu();}
        }else{DrawRectangle(300, 515, 200, 35, WHITE);} 
        if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 555) && (GetMouseY() < 590)){
            DrawRectangle(300, 555, 200, 35, GREEN);
            if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){ExitGame();}
        }else{DrawRectangle(300, 555, 200, 35, WHITE);} 
        DrawText("Continue", 305, 475, 35, BLACK);
        DrawText("Options", 305, 515, 35, BLACK);
        DrawText("Exit Game", 305, 555, 35, BLACK);
    }else{
        if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 475) && (GetMouseY() < 510)){
            DrawRectangle(300, 475, 200, 35, GREEN);
            if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){OptionMenu();}
        }else{DrawRectangle(300, 475, 200, 35, WHITE);} 
        if((GetMouseX() > 300) && (GetMouseX() < 500) && (GetMouseY() > 515) && (GetMouseY() < 550)){
            DrawRectangle(300, 515, 200, 35, GREEN);
            if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)){ExitGame();}
        }else{DrawRectangle(300, 515, 200, 35, WHITE);} 
        DrawText("Options", 305, 475, 35, BLACK);
        DrawText("ExitGame", 305, 515, 35, BLACK);
    }
}
