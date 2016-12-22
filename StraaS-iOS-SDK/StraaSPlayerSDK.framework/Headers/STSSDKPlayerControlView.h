//
//  STSSDKPlayerControlView.h
//  StraaS
//
//  Created by Lee on 6/15/16.
//
//

#import <UIKit/UIKit.h>
#import "STSSDKStreamingTimelineView.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  An instance of STSSDKPlayerControlView is a means for displaying playback controls
 *   (e.g. play button, pause button) and infos (e.g. title label, subtitle label).
 */
@interface STSSDKPlayerControlView : UIView

/**
 *  The container view is the default superview of the content displayed by the player control view.
 */
@property (nonatomic, readonly) UIImageView * containerView;

/**
 *  The label that shows the title of the current playing video.
 */
@property (nonatomic, readonly) UILabel * titleLabel;

/**
 *  The label that shows the synopsis of the current playing video.
 */
@property (nonatomic, readonly) UILabel * subtitleLabel;

/**
 *  The play button.
 */
@property (nonatomic, readonly) UIButton * playButton;

/**
 *  The pause button.
 */
@property (nonatomic, readonly) UIButton * pauseButton;

/**
 *  The replay button.
 */
@property (nonatomic, readonly) UIButton * replayButton;

/**
 *  The quality selection button.
 *  User can press this button to show a quality selection menu.
 */
@property (nonatomic, readonly) UIButton * qualityButton;

/**
 *  The previous button, only shows when player is playing a playlist.
 */
@property (nonatomic, readonly) UIButton * prevButton;

/**
 *  The next button, only shows when player is playing a playlist.
 */
@property (nonatomic, readonly) UIButton * nextButton;

/**
 *  The view that shows the playback time and duration.
 */
@property (nonatomic, readonly) STSSDKStreamingTimelineView * playbackTimelineView;

/**
 *  The view that indicates the currently playing item is a live.
 */
@property (nonatomic, readonly) UIView *liveMark;

/**
 *  The view that indicates the currently playing item is a 360 video/live.
 */
@property (nonatomic, readonly) UIImageView * sphericalMark;

/**
 *  The layout constraints of the subviews embedded in the containerView.
 *  Change this property to customize the layout of the playback controls and infos.
 */
@property (nonatomic) NSArray<NSLayoutConstraint *> * subviewLayoutConstraints;

/**
 *  A boolean value indicates whether the player control view is able to display the titleLabel.
 */
@property (nonatomic) BOOL canShowTitleLabel;

/**
 *  A boolean value indicates whether the player control view is able to display the subtitleLabel.
 *  This property works only when the player is playing a video/playlist. The subtitleLabel is always
 *  hidden when player is playing a live.
 */
@property (nonatomic) BOOL canShowSubtitleLabel;

/**
 *  A boolean value indicates whether the player control view is able to display the playback controls.
 */
@property (nonatomic) BOOL canShowPlaybackControlButtons;

/**
 *  A boolean value indicates whether the player control view is able to display the qualityButton.
 */
@property (nonatomic) BOOL canShowQualityButton;

/**
 *  A boolean value indicates whether the player control view is able to display the playbackTimelineView.
 *  This property works only when the player is playing a video/playlist. The playbackTimelineView
 *  is always hidden when player is playing a live.
 */
@property (nonatomic) BOOL canShowPlaybackTimelineView;

/**
 *  A boolean value indicates whether the player control view is able to display the liveMark.
 *  This property works only when the player is playing a live. The liveMark is always hidden when
 *  player is playing a video or a playlist.
 */
@property (nonatomic) BOOL canShowLiveMark;


/**
 *  A boolean value indicates whether the player control view is able to display the sphericalMark.
 *  This property works only when the player is playing a 360 video/live.
 */
@property (nonatomic) BOOL canShowSphericalMark;

@end

NS_ASSUME_NONNULL_END
