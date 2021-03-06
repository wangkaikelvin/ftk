/*This file is generated by luagen.*/
#include "lua_ftk_app_window.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkAppWindow");
}

static int lua_ftk_app_window_create(lua_State* L)
{
	FtkAppWindow* retv;
	retv = ftk_app_window_create();
	tolua_pushusertype(L, (FtkAppWindow*)retv, "FtkAppWindow");

	return 1;
}

static int lua_ftk_app_window_set_on_prepare_options_menu(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	char* on_prepare_options_menu;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	on_prepare_options_menu = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_app_window_set_on_prepare_options_menu(thiz, lua_ftk_prepare_options_menu_func, on_prepare_options_menu);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_app_window_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkAppWindow", "FtkAppWindow", "FtkWindow", NULL);
	tolua_beginmodule(L, "FtkAppWindow");
	tolua_function(L, "Create", lua_ftk_app_window_create);
	tolua_function(L, "SetOnPrepareOptionsMenu", lua_ftk_app_window_set_on_prepare_options_menu);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
