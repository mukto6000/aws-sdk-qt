// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvpceconfigurationsresponse.h"
#include "listvpceconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsResponse
 * \brief The ListVPCEConfigurationsResponse class provides an interace for DeviceFarm ListVPCEConfigurations responses.
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
 * \sa DeviceFarmClient::listVPCEConfigurations
 */

/*!
 * Constructs a ListVPCEConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListVPCEConfigurationsResponse::ListVPCEConfigurationsResponse(
        const ListVPCEConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListVPCEConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListVPCEConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVPCEConfigurationsRequest * ListVPCEConfigurationsResponse::request() const
{
    Q_D(const ListVPCEConfigurationsResponse);
    return static_cast<const ListVPCEConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListVPCEConfigurations \a response.
 */
void ListVPCEConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVPCEConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsResponsePrivate
 * \brief The ListVPCEConfigurationsResponsePrivate class provides private implementation for ListVPCEConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListVPCEConfigurationsResponsePrivate object with public implementation \a q.
 */
ListVPCEConfigurationsResponsePrivate::ListVPCEConfigurationsResponsePrivate(
    ListVPCEConfigurationsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListVPCEConfigurations response element from \a xml.
 */
void ListVPCEConfigurationsResponsePrivate::parseListVPCEConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVPCEConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
