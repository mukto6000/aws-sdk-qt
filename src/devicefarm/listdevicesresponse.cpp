// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDevicesResponse
 * \brief The ListDevicesResponse class provides an interace for DeviceFarm ListDevices responses.
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
 * \sa DeviceFarmClient::listDevices
 */

/*!
 * Constructs a ListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListDevices \a response.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListDevicesResponsePrivate
 * \brief The ListDevicesResponsePrivate class provides private implementation for ListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDevicesResponsePrivate object with public implementation \a q.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListDevices response element from \a xml.
 */
void ListDevicesResponsePrivate::parseListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
