/************************************************************************************

Filename    :   ResumeMovieComponent.h
Content     :
Created     :   September 4, 2014
Authors     :   Jim Dos�

Copyright   :   Copyright 2014 Oculus VR, LLC. All Rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the Cinema/ directory. An additional grant 
of patent rights can be found in the PATENTS file in the same directory.
*************************************************************************************/

#include "VRMenu/VRMenuComponent.h"

#if !defined( ResumeMovieComponent_h )
#define ResumeMovieComponent_h

using namespace OVR;

namespace VRMatterStreamTheater {

class ResumeMovieView;

//==============================================================
// ResumeMovieComponent
class ResumeMovieComponent : public VRMenuComponent
{
public:
	ResumeMovieComponent( ResumeMovieView *view, int itemNum );

	VRMenuObject * 			Icon;

	static const Vector4f	HighlightColor;
	static const Vector4f	FocusColor;
	static const Vector4f	NormalColor;

private:
    SoundLimiter			Sound;

	bool					HasFocus;
    int						ItemNum;
    ResumeMovieView *		CallbackView;

private:
    virtual eMsgStatus      OnEvent_Impl( OvrGuiSys & guiSys, VrFrame const & vrFrame,
                                    VRMenuObject * self, VRMenuEvent const & event );

	void					UpdateColor( VRMenuObject * self );

    eMsgStatus              Frame( OvrGuiSys & guiSys, VrFrame const & vrFrame,
                                    VRMenuObject * self, VRMenuEvent const & event );
    eMsgStatus              FocusGained( OvrGuiSys & guiSys, VrFrame const & vrFrame,
                                    VRMenuObject * self, VRMenuEvent const & event );
    eMsgStatus              FocusLost( OvrGuiSys & guiSys, VrFrame const & vrFrame,
                                    VRMenuObject * self, VRMenuEvent const & event );
};

} // namespace VRMatterStreamTheater

#endif // ResumeMovieComponent_h
