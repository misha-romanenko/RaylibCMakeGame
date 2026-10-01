#include "raylib.h"

int main()
{
    InitWindow(1280, 720, "Raylib 3D Test");

    Camera3D camera{};
    camera.position = { 5.0f, 5.0f, 5.0f };
    camera.target = { 0.0f, 0.0f, 0.0f };
    camera.up = { 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        UpdateCamera(&camera, CAMERA_FIRST_PERSON);

        BeginDrawing();
        ClearBackground(SKYBLUE);

        BeginMode3D(camera);

        DrawCube({ 0, 1, 0 }, 2, 2, 2, RED);
        DrawCubeWires({ 0, 1, 0 }, 2, 2, 2, MAROON);

        DrawGrid(20, 1.0f);

        EndMode3D();

        DrawText("Raylib 3D works!", 20, 20, 30, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
