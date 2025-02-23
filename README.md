# Vppelli OnlineTemplate Project
Developed with Unreal Engine 5.5
## Project Settings
This list of Project Settings changed and can be reverted based on the project.
- RayTracing Off (including all other ray trace options)
- DX11 for RHI
- SM5 for Shader settings
- Shadow Map Method to Shadow Maps
- Project Description
- Project Images
- Level Startup
- Using Enhanced Input system
- Base Gamemode
- Base GameInstance

## Contains the Following
- A clean UE5 project with Base Blueprints. (Gamemode, HUD, Player Controller, etc..)
- A C++ Character Actor with Gameplay Ability System.
- A Master UI Widget Blueprint that handles controller and keyboard navigation. (Setup details #How-to-use-template )
+ Child Button BP
- A Base Folder Structure, with one of each example's naming convention.

## Plugins
- Gameplay Ability System
- Gameplay Tags

# How to use the template
You can follow my setup and project overview video to understand everything for this blueprint.

# Important
Download "VS 2022" Visual Studio 2022 Community, or VS Code.

> I will be using VS 2022

Windows 10: 
Right click the **.uproject** Click **Generate Visual Studio Project**.

Windows 11: 
Same as Windows 10 but click **Show more options** first.

Wait till all files are generated.
Open the newly generated **.sln** file. Let it open up fully and process the code, you can view its progress at the bottom left Notification button. (Looks like a speech box)

Once it's complete go to the build tab on the top of VS 2022, and select Rebuild Solution. Wait till it's completed. 

Now you're done, open the project and begin your adventure.

> Will only need to do this once!! unless you write new C++ code, but at that point you understand the basics.

Everything else is untouched, and hopefully, this template will be your base for future projects.

This was made with organization in mind, using the correct Blueprints from the start, and naming convention for both Online and Offline Projects.

