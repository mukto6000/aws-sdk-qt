/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "creategamesessionqueuerequest.h"
#include "creategamesessionqueuerequest_p.h"
#include "creategamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::CreateGameSessionQueueRequest
 * \brief The CreateGameSessionQueueRequest class provides an interface for GameLift CreateGameSessionQueue requests.
 *
 * \inmodule QtAwsGameLift
 *
 *  <fullname>Amazon GameLift Service</fullname>
 * 
 *  GameLift provides solutions for hosting session-based multiplayer game servers in the cloud, including tools for
 *  deploying, operating, and scaling game servers. Built on AWS global computing infrastructure, GameLift helps you deliver
 *  high-performance, high-reliability, low-cost game servers while dynamically scaling your resource usage to meet player
 *  demand.
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
 *  This reference guide describes the low-level service API for Amazon GameLift. With each topic in this guide, you can
 *  find links to language-specific SDK guides and the AWS CLI reference. Useful
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
 * \sa GameLiftClient::createGameSessionQueue
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest(const CreateGameSessionQueueRequest &other)
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGameSessionQueueRequest object.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest()
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(GameLiftRequest::CreateGameSessionQueueAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGameSessionQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGameSessionQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateGameSessionQueueResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::CreateGameSessionQueueRequestPrivate
 * \brief The CreateGameSessionQueueRequestPrivate class provides private implementation for CreateGameSessionQueueRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a CreateGameSessionQueueRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, CreateGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGameSessionQueueRequest
 * class' copy constructor.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const CreateGameSessionQueueRequestPrivate &other, CreateGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
