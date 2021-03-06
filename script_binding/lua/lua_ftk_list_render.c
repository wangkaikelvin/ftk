/*This file is generated by luagen.*/
#include "lua_ftk_list_render.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkListRender");
}

static int lua_ftk_list_render_init(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkListRender* thiz;
	FtkListModel* model;
	FtkWidget* list_view;
	int param_ok = tolua_isusertype(L, 1, "FtkListRender", 0, &err) && tolua_isusertype(L, 2, "FtkListModel", 0, &err) && tolua_isusertype(L, 3, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	model = tolua_tousertype(L, 2, 0);
	list_view = tolua_tousertype(L, 3, 0);
	retv = ftk_list_render_init(thiz, model, list_view);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_list_render_paint(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkListRender* thiz;
	FtkCanvas* canvas;
	int pos;
	int x;
	int y;
	int w;
	int h;
	int param_ok = tolua_isusertype(L, 1, "FtkListRender", 0, &err) && tolua_isusertype(L, 2, "FtkCanvas", 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err) && tolua_isnumber(L, 6, 0, &err) && tolua_isnumber(L, 7, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	canvas = tolua_tousertype(L, 2, 0);
	pos = tolua_tonumber(L, 3, 0);
	x = tolua_tonumber(L, 4, 0);
	y = tolua_tonumber(L, 5, 0);
	w = tolua_tonumber(L, 6, 0);
	h = tolua_tonumber(L, 7, 0);
	retv = ftk_list_render_paint(thiz, canvas, pos, x, y, w, h);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_list_render_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkListRender* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkListRender", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_list_render_destroy(thiz);

	return 1;
}

int tolua_ftk_list_render_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkListRender", "FtkListRender", "", NULL);
	tolua_beginmodule(L, "FtkListRender");
	tolua_function(L, "Init", lua_ftk_list_render_init);
	tolua_function(L, "Paint", lua_ftk_list_render_paint);
	tolua_function(L, "Destroy", lua_ftk_list_render_destroy);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
