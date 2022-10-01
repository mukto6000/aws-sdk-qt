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

#include "createplayersessionsresponse.h"
#include "createplayersessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/*!
 * \class QtAws::GameLift::CreatePlayerSessionsResponse
 * \brief The CreatePlayerSessionsResponse class provides an interace for GameLift CreatePlayerSessions responses.
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
 * \sa GameLiftClient::createPlayerSessions
 */

/*!
 * Constructs a CreatePlayerSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlayerSessionsResponse::CreatePlayerSessionsResponse(
        const CreatePlayerSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreatePlayerSessionsResponsePrivate(this), parent)
{
    setRequest(new CreatePlayerSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlayerSessionsRequest * CreatePlayerSessionsResponse::request() const
{
    Q_D(const CreatePlayerSessionsResponse);
    return static_cast<const CreatePlayerSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameLift CreatePlayerSessions \a response.
 */
void CreatePlayerSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePlayerSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameLift::CreatePlayerSessionsResponsePrivate
 * \brief The CreatePlayerSessionsResponsePrivate class provides private implementation for CreatePlayerSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsGameLift
 */

/*!
 * Constructs a CreatePlayerSessionsResponsePrivate object with public implementation \a q.
 */
CreatePlayerSessionsResponsePrivate::CreatePlayerSessionsResponsePrivate(
    CreatePlayerSessionsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/*!
 * Parses a GameLift CreatePlayerSessions response element from \a xml.
 */
void CreatePlayerSessionsResponsePrivate::parseCreatePlayerSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlayerSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameLift
} // namespace QtAws
