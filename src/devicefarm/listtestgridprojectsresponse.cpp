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

#include "listtestgridprojectsresponse.h"
#include "listtestgridprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridProjectsResponse
 * \brief The ListTestGridProjectsResponse class provides an interace for DeviceFarm ListTestGridProjects responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listTestGridProjects
 */

/*!
 * Constructs a ListTestGridProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestGridProjectsResponse::ListTestGridProjectsResponse(
        const ListTestGridProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestGridProjectsResponsePrivate(this), parent)
{
    setRequest(new ListTestGridProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestGridProjectsRequest * ListTestGridProjectsResponse::request() const
{
    Q_D(const ListTestGridProjectsResponse);
    return static_cast<const ListTestGridProjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListTestGridProjects \a response.
 */
void ListTestGridProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestGridProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridProjectsResponsePrivate
 * \brief The ListTestGridProjectsResponsePrivate class provides private implementation for ListTestGridProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridProjectsResponsePrivate object with public implementation \a q.
 */
ListTestGridProjectsResponsePrivate::ListTestGridProjectsResponsePrivate(
    ListTestGridProjectsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListTestGridProjects response element from \a xml.
 */
void ListTestGridProjectsResponsePrivate::parseListTestGridProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestGridProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
