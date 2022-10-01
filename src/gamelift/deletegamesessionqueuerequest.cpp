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

#include "deletegamesessionqueuerequest.h"
#include "deletegamesessionqueuerequest_p.h"
#include "deletegamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::DeleteGameSessionQueueRequest
 * \brief The DeleteGameSessionQueueRequest class provides an interface for GameLift DeleteGameSessionQueue requests.
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
 * \sa GameLiftClient::deleteGameSessionQueue
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGameSessionQueueRequest::DeleteGameSessionQueueRequest(const DeleteGameSessionQueueRequest &other)
    : GameLiftRequest(new DeleteGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGameSessionQueueRequest object.
 */
DeleteGameSessionQueueRequest::DeleteGameSessionQueueRequest()
    : GameLiftRequest(new DeleteGameSessionQueueRequestPrivate(GameLiftRequest::DeleteGameSessionQueueAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGameSessionQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGameSessionQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGameSessionQueueResponse(*this, reply);
}

/*!
 * \class QtAws::GameLift::DeleteGameSessionQueueRequestPrivate
 * \brief The DeleteGameSessionQueueRequestPrivate class provides private implementation for DeleteGameSessionQueueRequest.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a DeleteGameSessionQueueRequestPrivate object for GameLift \a action,
 * with public implementation \a q.
 */
DeleteGameSessionQueueRequestPrivate::DeleteGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, DeleteGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGameSessionQueueRequest
 * class' copy constructor.
 */
DeleteGameSessionQueueRequestPrivate::DeleteGameSessionQueueRequestPrivate(
    const DeleteGameSessionQueueRequestPrivate &other, DeleteGameSessionQueueRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
