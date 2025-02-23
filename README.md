# Vppelli OnlineTemplate Project
Developed with Unreal Engine 5.5
## Project Settings
This is a list of Project Settings changed, can be reverted based on project.
- RayTracing Off (including all other raytrace options)
- DX11 for RHI
- SM5 for Shader settings
- Shadom Map Method to Shadow Maps
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
- A Base Folder Structure, with one of each example's nameing convention.

## Plugins
- Gameplay Ability System
- Gameplay Tags

# How to use template
Follow my setup and Project overview video to understand everything for this blueprint.

# Important
Download "VS 2022" Visual Studio 2022 Community, or VS Code.

> I will be using VS 2022

Windows 10: 
Right click the **.uproject** Click **Generate Visual Studio Project**.

Windows 11: 
Same as Windows 10 but click **Show more options** first.

Wait till all files generate.
Open the new generated **.sln** file. Let it open up fully and process the code, you can view its progress at the bottom left Notification button. (Looks like a speach box)

Once that is completed. Go to the build tab on the top of VS 2022, Select Rebuild Solution. Wait till its completed. 

Now you are done, open the project and begin your adventure.

> Will only need to do this once!! unless you wirte new C++ code, but at that point you understand the basics.

Everything else is untoched, and hopefully this template will be your base for future projects.

This was made with orginization in mind, using the correct Blueprints from the start, naming convention. For both Online and Offline Projects.

