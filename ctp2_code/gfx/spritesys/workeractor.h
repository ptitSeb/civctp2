#ifdef HAVE_PRAGMA_ONCE
#pragma once
#endif
#ifndef __WORKERACTOR_H__
#define __WORKERACTOR_H__

#include "Actor.h"              // Actor
#include "ctp2_inttypes.h"      // sint32, uint16
#include "Queue.h"              // Queue
#include "UnitSpriteGroup.h"    // UNITACTION
#include "World.h"              // MapPoint

class Action;
class Anim;
class aui_Surface;
// MBCHAR

class WorkerActor : public Actor
{
public:
	WorkerActor(sint32 index, const MapPoint &pos, sint32 x = 0, sint32 y = 0);
    ~WorkerActor();

	virtual void	Process(void);

	void			AddAction(Action *actionObj);
	void			GetNextAction(void);
	void			AddIdle(void);

	Anim *          CreateAnim(UNITACTION action);

	void			Draw(void);
	void			DrawDirect(aui_Surface *surf, sint32 x, sint32 y, double scale);

	void			DrawText(sint32 x, sint32 y, MBCHAR const * goodText);

	bool			IsAnimating(void) const;

	MapPoint		GetPos(void) const { return m_pos; }
	uint16			GetWidth(void) const;
	uint16			GetHeight(void) const;

	void			SetFrame(sint32 frame) { m_frame = frame; }

protected:
	sint32				m_facing;
	sint32				m_frame;
	uint16				m_transparency;
	sint32              m_index;
	MapPoint			m_pos;
	UnitSpriteGroup	*   m_unitSpriteGroup;
	Action *            m_curAction;
	UNITACTION			m_curUnitAction;
	Queue<Action *>		m_actionQueue;
};

#endif
