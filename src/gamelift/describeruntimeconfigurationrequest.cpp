// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeruntimeconfigurationrequest.h"
#include "describeruntimeconfigurationrequest_p.h"
#include "describeruntimeconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::DescribeRuntimeConfigurationRequest
 * \brief The DescribeRuntimeConfigurationRequest class provides an interface for GameLift DescribeRuntimeConfiguration requests.
 *
 * \inmodule QtAwsGameLift
 *
 *  <fullname>GameLift Service</fullname>
 * 
 *  Amazon Web Services provides solutions for hosting session-based multiplayer game servers in the cloud, including tools
 *  for deploying, operating, and scaling game servers. Built on Amazon Web Services global computing infrastructure,
 *  GameLift helps you deliver high-performance, high-reliability, low-cost game servers while dynamically scaling your
 *  resource usage to meet player demand.
 * 
 *  </p
 * 
 *  <b>About GameLift solutions</b>
 * 
 *  </p
 * 
 *  Get more information on these GameLift solutions in the <a
 *  href="https://docs.aws.amazon.com/gamelift/latest/developerguide/">GameLift Developer
 * 
 *  Guide</a>> <ul> <li>
 * 
 *  GameLift managed hosting -- GameLift offers a fully managed service to set up and maintain computing machines for
 *  hosting, manage game session and player session life cycle, and handle security, storage, and performance tracking. You
 *  can use automatic scaling tools to balance player demand and hosting costs, configure your game session management to
 *  minimize player latency, and add FlexMatch for
 * 
 *  matchmaking> </li> <li>
 * 
 *  Managed hosting with Realtime Servers -- With GameLift Realtime Servers, you can quickly configure and set up
 *  ready-to-go game servers for your game. Realtime Servers provides a game server framework with core GameLift
 *  infrastructure already built in. Then use the full range of GameLift managed hosting features, including FlexMatch, for
 *  your
 * 
 *  game> </li> <li>
 * 
 *  GameLift FleetIQ -- Use GameLift FleetIQ as a standalone service while hosting your games using EC2 instances and Auto
 *  Scaling groups. GameLift FleetIQ provides optimizations for game hosting, including boosting the viability of low-cost
 *  Spot Instances gaming. For a complete solution, pair the GameLift FleetIQ and FlexMatch standalone
 * 
 *  services> </li> <li>
 * 
 *  GameLift FlexMatch -- Add matchmaking to your game hosting solution. FlexMatch is a customizable matchmaking service for
 *  multiplayer games. Use FlexMatch as integrated with GameLift managed hosting or incorporate FlexMatch as a standalone
 *  service into your own hosting
 * 
 *  solution> </li> </ul>
 * 
 *  <b>About this API Reference</b>
 * 
 *  </p
 * 
 *  This reference guide describes the low-level service API for Amazon Web Services. With each topic in this guide, you can
 *  find links to language-specific SDK guides and the Amazon Web Services CLI reference. Useful
 * 
 *  links> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html">GameLift API operations
 *  listed by tasks</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html"> GameLift tools and
 *  resources</a>
 *
 * \sa GameLiftClient::describeRuntimeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRuntimeConfigurationRequest::DescribeRuntimeConfigurationRequest(const DescribeRuntimeConfigurationRequest &other)
    : GameLiftRequest(new DescribeRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRuntimeConfigurationRequest object.
 */
DescribeRuntimeConfigurationRequest::DescribeRuntimeConfigurationRequest()
    : GameLiftRequest(new DescribeRuntimeConfigurationRequestPrivate(GameLiftRequest::DescribeRuntimeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRuntimeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuntimeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::DescribeRuntimeConfigurationRequestPrivate
 * \brief The DescribeRuntimeConfigurationRequestPrivate class provides private implementation for DescribeRuntimeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a DescribeRuntimeConfigurationRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
DescribeRuntimeConfigurationRequestPrivate::DescribeRuntimeConfigurationRequestPrivate(
    const GameLiftRequest::Action action, DescribeRuntimeConfigurationRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuntimeConfigurationRequest
 * class' copy constructor.
 */
DescribeRuntimeConfigurationRequestPrivate::DescribeRuntimeConfigurationRequestPrivate(
    const DescribeRuntimeConfigurationRequestPrivate &other, DescribeRuntimeConfigurationRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
