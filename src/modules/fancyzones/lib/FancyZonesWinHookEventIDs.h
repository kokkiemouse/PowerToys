#pragma once

extern UINT WM_PRIV_MOVESIZESTART;
extern UINT WM_PRIV_MOVESIZEEND;
extern UINT WM_PRIV_LOCATIONCHANGE;
extern UINT WM_PRIV_NAMECHANGE;
extern UINT WM_PRIV_WINDOWCREATED;

void initialize_winhook_event_ids();