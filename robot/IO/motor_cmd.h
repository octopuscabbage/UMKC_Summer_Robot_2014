




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>RobotTestBot/presentation/c_motor_cmd.h at master · octopuscabbage/RobotTestBot</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="octopuscabbage/RobotTestBot" name="twitter:title" /><meta content="RobotTestBot - A robot presentation " name="twitter:description" /><meta content="https://avatars1.githubusercontent.com/u/1151949?s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars1.githubusercontent.com/u/1151949?s=400" property="og:image" /><meta content="octopuscabbage/RobotTestBot" property="og:title" /><meta content="https://github.com/octopuscabbage/RobotTestBot" property="og:url" /><meta content="RobotTestBot - A robot presentation " property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    <link rel="xhr-socket" href="/_sockets" />

    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="A2C15C8E:512D:B3DD5B:5390D93D" name="octolytics-dimension-request_id" /><meta content="1151949" name="octolytics-actor-id" /><meta content="octopuscabbage" name="octolytics-actor-login" /><meta content="393969a64963bff9378362915a9274b62c0550510fd8c54c1a2d4a204bc597fc" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico" />


    <meta content="authenticity_token" name="csrf-param" />
<meta content="W/GOMhhzwofjiCalzBbsD8+gaMw7z+qkXXRi/Pf3VR/+T4mR3tVxoayE2tzuyjkEKm6ryu4WeQXQHXxR3EP5Nw==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-ce4c4a5a4bec4a4362577a19114fa72906ea4ec8.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-8f544b90b7afbf2dfa2d8228f205484ba43457d2.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="17d3f70461490ea07562c9a0730caa0c">

      
  <meta name="description" content="RobotTestBot - A robot presentation " />

  <meta content="1151949" name="octolytics-dimension-user_id" /><meta content="octopuscabbage" name="octolytics-dimension-user_login" /><meta content="19411974" name="octolytics-dimension-repository_id" /><meta content="octopuscabbage/RobotTestBot" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="19411974" name="octolytics-dimension-repository_network_root_id" /><meta content="octopuscabbage/RobotTestBot" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/octopuscabbage/RobotTestBot/commits/master.atom" rel="alternate" title="Recent Commits to RobotTestBot:master" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production linux vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s" data-hotkey="g n">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s, /" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="octopuscabbage"
      data-repo="octopuscabbage/RobotTestBot"
      data-branch="master"
      data-sha="e0c213cc667d43babdc01ab307ee32918545fcda"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="octopuscabbage/RobotTestBot" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/octopuscabbage" class="name">
        <img alt="Chris Denniston" class=" js-avatar" data-user="1151949" height="20" src="https://avatars2.githubusercontent.com/u/1151949?s=140" width="20" /> octopuscabbage
      </a>
    </li>

    <li class="new-menu dropdown-toggle js-menu-container">
      <a href="#" class="js-menu-target tooltipped tooltipped-s" aria-label="Create new...">
        <span class="octicon octicon-plus"></span>
        <span class="dropdown-arrow"></span>
      </a>

      <div class="new-menu-content js-menu-content">
      </div>
    </li>

    <li>
      <a href="/settings/profile" id="account_settings"
        class="tooltipped tooltipped-s"
        aria-label="Account settings ">
        <span class="octicon octicon-tools"></span>
      </a>
    </li>
    <li>
      <form class="logout-form" action="/logout" method="post">
        <button class="sign-out-button tooltipped tooltipped-s" aria-label="Sign out">
          <span class="octicon octicon-sign-out"></span>
        </button>
      </form>
    </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


    <li class="section-title">
      <span title="octopuscabbage/RobotTestBot">This repository</span>
    </li>
      <li>
        <a href="/octopuscabbage/RobotTestBot/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
      </li>
      <li>
        <a href="/octopuscabbage/RobotTestBot/settings/collaboration"><span class="octicon octicon-person"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

        



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="Fw0mQ0pyJ42SjHcPKROpO9I2bq8qBBuga9zHTHcK9RfIaQHuh5DHJZurXC7t9C/12uKBr1Wgg3GCkiLK6q0U5w==" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="19411974" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/octopuscabbage/RobotTestBot/watchers">
        1
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-x js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/octopuscabbage/RobotTestBot/unstar" class="js-toggler-form starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="bOC6sYGLrRkqze2ou1zThAiVshNBh3UBobWarp3JsmFtutF2ZrpBT3Wo0mBRIm3Pr8cTXrfWT2oTT7Xnadx/1A==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Unstar this repository" title="Unstar octopuscabbage/RobotTestBot">
        <span class="octicon octicon-star"></span><span class="text">Unstar</span>
      </button>
        <a class="social-count js-social-count" href="/octopuscabbage/RobotTestBot/stargazers">
          0
        </a>
</form>
    <form accept-charset="UTF-8" action="/octopuscabbage/RobotTestBot/star" class="js-toggler-form unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="4czXioYoc5zzL+7vX38ls8JKGRFbxXREPmNrFEIvzFkn95I/nu8Hkq5x4ch1MnhCm62JO0I4i1rgaMd4cMOJgA==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Star this repository" title="Star octopuscabbage/RobotTestBot">
        <span class="octicon octicon-star"></span><span class="text">Star</span>
      </button>
        <a class="social-count js-social-count" href="/octopuscabbage/RobotTestBot/stargazers">
          0
        </a>
</form>  </div>

  </li>


        <li>
          <a href="/octopuscabbage/RobotTestBot/fork" class="minibutton with-count js-toggler-target fork-button lighter tooltipped-n" title="Fork your own copy of octopuscabbage/RobotTestBot to your account" aria-label="Fork your own copy of octopuscabbage/RobotTestBot to your account" rel="nofollow" data-method="post">
            <span class="octicon octicon-repo-forked"></span><span class="text">Fork</span>
          </a>
          <a href="/octopuscabbage/RobotTestBot/network" class="social-count">0</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/octopuscabbage" class="url fn" itemprop="url" rel="author"><span itemprop="title">octopuscabbage</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/octopuscabbage/RobotTestBot" class="js-current-repository js-repo-home-link">RobotTestBot</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/octopuscabbage/RobotTestBot" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /octopuscabbage/RobotTestBot">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/octopuscabbage/RobotTestBot/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g i" data-selected-links="repo_issues /octopuscabbage/RobotTestBot/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/octopuscabbage/RobotTestBot/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /octopuscabbage/RobotTestBot/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/octopuscabbage/RobotTestBot/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g w" data-selected-links="repo_wiki /octopuscabbage/RobotTestBot/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/octopuscabbage/RobotTestBot/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /octopuscabbage/RobotTestBot/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/octopuscabbage/RobotTestBot/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /octopuscabbage/RobotTestBot/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/octopuscabbage/RobotTestBot/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /octopuscabbage/RobotTestBot/network">
          <span class="octicon octicon-repo-forked"></span> <span class="full-word">Network</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


      <div class="sunken-menu-separator"></div>
      <ul class="sunken-menu-group">
        <li class="tooltipped tooltipped-w" aria-label="Settings">
          <a href="/octopuscabbage/RobotTestBot/settings" aria-label="Settings" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_settings /octopuscabbage/RobotTestBot/settings">
            <span class="octicon octicon-tools"></span> <span class="full-word">Settings</span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
      </ul>
  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url "
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=push">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/octopuscabbage/RobotTestBot.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/octopuscabbage/RobotTestBot.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=push">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:octopuscabbage/RobotTestBot.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="git@github.com:octopuscabbage/RobotTestBot.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url open"
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=push">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/octopuscabbage/RobotTestBot" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/octopuscabbage/RobotTestBot" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>



                <a href="/octopuscabbage/RobotTestBot/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download octopuscabbage/RobotTestBot as a zip file"
                   title="Download octopuscabbage/RobotTestBot as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<a href="/octopuscabbage/RobotTestBot/blob/4b62741fc70720b663e453b59b8ccc5fe482ec05/presentation/c_motor_cmd.h" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:b4c3138de5bd84ac67d99d642113f4f4 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/octopuscabbage/RobotTestBot/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/octopuscabbage/RobotTestBot/blob/master/presentation/c_motor_cmd.h"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <form accept-charset="UTF-8" action="/octopuscabbage/RobotTestBot/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="eWSpmgNobN3o14E9NXE3/B20+v90UKfH8hlfcncZzMh2di5MURHp67v4DKytfTAMiX9mK+ARXnvIsjEQ4fxQaQ==" /></div>
            <span class="octicon octicon-git-branch select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <h4>Create branch: <span class="js-new-item-name"></span></h4>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master" />
            <input type="hidden" name="path" id="path" value="presentation/c_motor_cmd.h" />
          </form> <!-- /.select-menu-item -->

      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/octopuscabbage/RobotTestBot" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">RobotTestBot</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/octopuscabbage/RobotTestBot/tree/master/presentation" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">presentation</span></a></span><span class="separator"> / </span><strong class="final-path">c_motor_cmd.h</strong> <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="presentation/c_motor_cmd.h" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>
</div>


  <div class="commit file-history-tease">
      <img alt="" class="main-avatar" height="24" src="https://0.gravatar.com/avatar/cf233815a0feed83ec268340d0fb424d?d=https%3A%2F%2Fassets-cdn.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png&amp;r=x&amp;s=140" width="24" />
      <span class="author"><span>Chase Peterson</span></span>
      <time datetime="2014-05-05T17:03:11-05:00" is="relative-time">May 05, 2014</time>
      <div class="commit-title">
          <a href="/octopuscabbage/RobotTestBot/commit/e52b8738bcd78eedea197035d82aa7aef59f4b62" class="message" data-pjax="true" title="It works">It works</a>
      </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>0</strong>  contributors</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>94 lines (84 sloc)</span>
          <span class="meta-divider"></span>
        <span>2.399 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
                <a class="minibutton js-update-url-with-hash"
                   href="/octopuscabbage/RobotTestBot/edit/master/presentation/c_motor_cmd.h"
                   data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
          <a href="/octopuscabbage/RobotTestBot/raw/master/presentation/c_motor_cmd.h" class="button minibutton " id="raw-url">Raw</a>
            <a href="/octopuscabbage/RobotTestBot/blame/master/presentation/c_motor_cmd.h" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/octopuscabbage/RobotTestBot/commits/master/presentation/c_motor_cmd.h" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->

            <a class="minibutton danger empty-icon"
               href="/octopuscabbage/RobotTestBot/delete/master/presentation/c_motor_cmd.h"
               data-method="post" data-test-id="delete-blob-file" rel="nofollow">

          Delete
        </a>
      </div><!-- /.actions -->
    </div>
      
  <div class="blob-wrapper data type-c js-blob-data">
       <table class="file-code file-diff tab-size-8">
         <tr class="file-code-line">
           <td class="blob-line-nums">
             <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>

           </td>
           <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><br/></div><div class='line' id='LC2'><br/></div><div class='line' id='LC3'><span class="cp">#ifndef C_MOTOR_CMD_H</span></div><div class='line' id='LC4'><span class="cp">#define C_MOTOR_CMD_H</span></div><div class='line' id='LC5'><br/></div><div class='line' id='LC6'><span class="cp">#include &quot;Arduino.h&quot;</span></div><div class='line' id='LC7'><span class="cp">#include &lt;SoftwareSerial.h&gt;</span></div><div class='line' id='LC8'><br/></div><div class='line' id='LC9'><span class="cp">#define scbyte static const byte</span></div><div class='line' id='LC10'><span class="cp">#define debug true</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><span class="k">class</span> <span class="nc">c_motor_cmd</span><span class="p">{</span></div><div class='line' id='LC13'><span class="nl">private:</span></div><div class='line' id='LC14'>&nbsp;&nbsp;<span class="n">SoftwareSerial</span> <span class="n">mcontrol</span><span class="p">;</span></div><div class='line' id='LC15'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">writeSpeedToBothMotors</span><span class="p">(</span><span class="n">byte</span> <span class="n">speedToGo</span><span class="p">){</span></div><div class='line' id='LC16'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">r</span> <span class="o">|</span> <span class="n">speedToGo</span><span class="p">);</span></div><div class='line' id='LC17'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::r --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="n">speedToGo</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC18'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">l</span> <span class="o">|</span> <span class="n">speedToGo</span><span class="p">);</span></div><div class='line' id='LC19'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::l --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="n">speedToGo</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC20'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC21'><br/></div><div class='line' id='LC22'>&nbsp;&nbsp;<span class="c1">//Generic turn function, motor is the motor you want to turn forward turn(motor.r) turns the robot right</span></div><div class='line' id='LC23'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">turn</span><span class="p">(</span><span class="n">byte</span> <span class="n">motorToGoFoward</span><span class="p">,</span> <span class="n">byte</span> <span class="n">speedOfBoth</span><span class="o">=</span><span class="mh">0x10</span><span class="p">){</span></div><div class='line' id='LC24'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">motorToGoFoward</span> <span class="o">==</span> <span class="n">motor</span><span class="o">::</span><span class="n">r</span><span class="p">){</span></div><div class='line' id='LC25'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">r</span> <span class="o">|</span> <span class="n">speedOfBoth</span><span class="p">);</span></div><div class='line' id='LC26'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">debug</span><span class="p">)</span></div><div class='line' id='LC27'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::r --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="n">speedOfBoth</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC28'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">l</span> <span class="o">|</span> <span class="mh">0x80</span> <span class="o">-</span> <span class="n">speedOfBoth</span><span class="p">);</span></div><div class='line' id='LC29'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">debug</span><span class="p">)</span></div><div class='line' id='LC30'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::l --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="mh">0x80</span> <span class="o">-</span> <span class="n">speedOfBoth</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC31'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC32'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span><span class="p">{</span></div><div class='line' id='LC33'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">r</span> <span class="o">|</span> <span class="mh">0x80</span> <span class="o">-</span> <span class="n">speedOfBoth</span><span class="p">);</span>		</div><div class='line' id='LC34'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">debug</span><span class="p">)</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::r --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="mh">0x80</span> <span class="o">-</span> <span class="n">speedOfBoth</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC36'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">l</span> <span class="o">|</span> <span class="n">speedOfBoth</span><span class="p">);</span></div><div class='line' id='LC37'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">debug</span><span class="p">)</span></div><div class='line' id='LC38'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Serial</span><span class="p">.</span><span class="n">print</span><span class="p">(</span><span class="s">&quot;motor::l --&gt; &quot;</span><span class="p">);</span> <span class="n">Serial</span><span class="p">.</span><span class="n">println</span><span class="p">(</span><span class="n">speedOfBoth</span><span class="p">,</span> <span class="n">HEX</span><span class="p">);</span></div><div class='line' id='LC39'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC40'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC41'><span class="nl">public:</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="k">struct</span> <span class="n">motor</span><span class="p">{</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">r</span> <span class="o">=</span> <span class="mh">0x80</span><span class="p">;</span> <span class="c1">//right side looking down</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">l</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span> <span class="c1">//left side looking down</span></div><div class='line' id='LC45'>&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC46'>&nbsp;&nbsp;<span class="k">struct</span> <span class="n">speeds</span><span class="p">{</span></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">forward</span><span class="p">{</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">full</span> <span class="o">=</span> <span class="mh">0x01</span><span class="p">;</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">half</span> <span class="o">=</span> <span class="mh">0x20</span><span class="p">;</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">quarter</span> <span class="o">=</span> <span class="mh">0x20</span><span class="p">;</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">allStop</span> <span class="o">=</span> <span class="mh">0x00</span><span class="p">;</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">reverse</span><span class="p">{</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">full</span> <span class="o">=</span> <span class="mh">0x7F</span><span class="p">;</span></div><div class='line' id='LC55'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">half</span> <span class="o">=</span> <span class="mh">0x60</span><span class="p">;</span></div><div class='line' id='LC56'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scbyte</span> <span class="n">quarter</span> <span class="o">=</span> <span class="mh">0x50</span><span class="p">;</span></div><div class='line' id='LC57'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="n">c_motor_cmd</span><span class="p">()</span> <span class="o">:</span> </div><div class='line' id='LC61'>&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">(</span><span class="mi">3</span><span class="p">,</span><span class="mi">2</span><span class="p">){</span></div><div class='line' id='LC62'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">begin</span><span class="p">(</span><span class="mi">9600</span><span class="p">);</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">allStop</span><span class="p">(){</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mcontrol</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">speeds</span><span class="o">::</span><span class="n">allStop</span><span class="p">);</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">goForward</span><span class="p">(){</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">writeSpeedToBothMotors</span><span class="p">(</span><span class="n">speeds</span><span class="o">::</span><span class="n">forward</span><span class="o">::</span><span class="n">full</span><span class="p">);</span></div><div class='line' id='LC70'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="c1">//Usage goSpeed(speed.forward.full);</span></div><div class='line' id='LC72'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">goSpeed</span><span class="p">(</span><span class="n">byte</span> <span class="n">speedToGo</span><span class="p">){</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">writeSpeedToBothMotors</span><span class="p">(</span><span class="n">speedToGo</span><span class="p">);</span></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC75'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">goBackward</span><span class="p">(){</span></div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">writeSpeedToBothMotors</span><span class="p">(</span><span class="n">speeds</span><span class="o">::</span><span class="n">reverse</span><span class="o">::</span><span class="n">half</span><span class="p">);</span></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">turnRight</span><span class="p">(){</span></div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">turn</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">r</span><span class="p">);</span></div><div class='line' id='LC80'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="c1">//Supply the speed of the forward direction you want, for example turnRight(speed.foward.full);</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">turnRight</span><span class="p">(</span><span class="n">byte</span> <span class="n">speedToTurn</span><span class="p">){</span></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">turn</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">r</span><span class="p">,</span><span class="n">speedToTurn</span><span class="p">);</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">turnLeft</span><span class="p">(){</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">turn</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">l</span><span class="p">);</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="kt">void</span> <span class="n">turnLeft</span><span class="p">(</span><span class="n">byte</span> <span class="n">speedToTurn</span><span class="p">){</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">turn</span><span class="p">(</span><span class="n">motor</span><span class="o">::</span><span class="n">l</span><span class="p">,</span><span class="n">speedToTurn</span><span class="p">);</span></div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC91'><span class="p">};</span></div><div class='line' id='LC92'><span class="cp">#endif</span></div><div class='line' id='LC93'><br/></div></pre></div></td>
         </tr>
       </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.05525s from github-fe133-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-ec74d07786e954c40f894a87e76f9896dc859586.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-41a23288068e4484cfbf360335086f7062a5c29f.js" type="text/javascript"></script>
      
      
        <script async src="https://www.google-analytics.com/analytics.js"></script>
  </body>
</html>

