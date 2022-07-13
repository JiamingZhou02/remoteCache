#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AffirmActivityIndicatorView.h"
#import "AffirmBaseWebViewController.h"
#import "AffirmBillingDetail.h"
#import "AffirmCardInfoViewController.h"
#import "AffirmCardValidator.h"
#import "AffirmCheckout.h"
#import "AffirmCheckoutDelegate.h"
#import "AffirmCheckoutViewController.h"
#import "AffirmClient.h"
#import "AffirmConfiguration.h"
#import "AffirmConstants.h"
#import "AffirmCreditCard.h"
#import "AffirmDataHandler.h"
#import "AffirmDiscount.h"
#import "AffirmEligibilityViewController.h"
#import "AffirmFontLoader.h"
#import "AffirmHowToViewController.h"
#import "AffirmItem.h"
#import "AffirmJSONifiable.h"
#import "AffirmLogger.h"
#import "AffirmOrder.h"
#import "AffirmOrderTrackerViewController.h"
#import "AffirmPopupViewController.h"
#import "AffirmPrequalDelegate.h"
#import "AffirmPrequalModalViewController.h"
#import "AffirmProduct.h"
#import "AffirmPromoModalViewController.h"
#import "AffirmPromotionalButton.h"
#import "AffirmReasonCode.h"
#import "AffirmRequest.h"
#import "AffirmSDK.h"
#import "AffirmShippingDetail.h"
#import "AffirmUtils.h"

FOUNDATION_EXPORT double AffirmSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char AffirmSDKVersionString[];

