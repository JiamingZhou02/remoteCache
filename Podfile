# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'

plugin 'cocoapods-xcremotecache'

xcremotecache({
  'cache_addresses' => ['http://localhost:8080/cache/pods'],
  'primary_repo' => 'https://github.com/JiamingZhou02/remoteCache.git',
  'mode' => 'producer',
  'final_target' => 'RemoteCacheTest',
  'primary_branch' => 'main'
})

target 'RemoteCacheTest' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for RemoteCacheTest
  pod 'Alamofire', '5.4.4'
  pod 'AlamofireImage', '4.2.0'
  pod 'AppsFlyerFramework', '6.5.0'
  pod 'Braintree/ApplePay', '5.10.0'
  pod 'Braintree/Card', '5.10.0'
  pod 'Braintree/PayPal', '5.10.0'
  pod 'Braintree/Venmo', '5.10.0'
  pod 'Braintree/DataCollector', '5.10.0'
  pod 'FBSDKCoreKit', '14.0.0'
  pod 'FBSDKLoginKit', '14.0.0'
  pod 'FBSDKShareKit', '14.0.0'
  pod 'FirebasePerformance', '8.8.0'
  pod 'FirebaseCrashlytics', '8.8.0'
  pod 'GoogleSignIn', '6.1.0'
  pod 'GoogleTagManager', '7.4.0'
  pod 'DTCoreText', '1.6.21'
  pod 'Sift', '0.9.10'
  pod 'Branch', '1.39.4'
  pod 'MBProgressHUD', '~> 1.1.0'
  pod 'SnapSDK/SCSDKCreativeKit', '1.13.0'
  pod 'RxCocoa', '5.1.1'
  pod 'RxRelay', '5.1.1'
  pod 'RxSwift', '5.1.1'
  pod 'AffirmSDK', '5.0.22'
  pod 'Charts', '3.6.0'
  pod 'Atributika', '4.10.1'
  pod 'Adyen/Card', '4.6.0'
  pod 'Adyen/Encryption', '4.6.0'

  target 'RemoteCacheTestTests' do
    inherit! :search_paths
    # Pods for testing
  end

  target 'RemoteCacheTestUITests' do
    # Pods for testing
  end

end
