// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionsoninterconnectresponse.h"
#include "describeconnectionsoninterconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsOnInterconnectResponse
 * \brief The DescribeConnectionsOnInterconnectResponse class provides an interace for DirectConnect DescribeConnectionsOnInterconnect responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::describeConnectionsOnInterconnect
 */

/*!
 * Constructs a DescribeConnectionsOnInterconnectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionsOnInterconnectResponse::DescribeConnectionsOnInterconnectResponse(
        const DescribeConnectionsOnInterconnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionsOnInterconnectResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionsOnInterconnectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionsOnInterconnectRequest * DescribeConnectionsOnInterconnectResponse::request() const
{
    Q_D(const DescribeConnectionsOnInterconnectResponse);
    return static_cast<const DescribeConnectionsOnInterconnectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeConnectionsOnInterconnect \a response.
 */
void DescribeConnectionsOnInterconnectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionsOnInterconnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsOnInterconnectResponsePrivate
 * \brief The DescribeConnectionsOnInterconnectResponsePrivate class provides private implementation for DescribeConnectionsOnInterconnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionsOnInterconnectResponsePrivate object with public implementation \a q.
 */
DescribeConnectionsOnInterconnectResponsePrivate::DescribeConnectionsOnInterconnectResponsePrivate(
    DescribeConnectionsOnInterconnectResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeConnectionsOnInterconnect response element from \a xml.
 */
void DescribeConnectionsOnInterconnectResponsePrivate::parseDescribeConnectionsOnInterconnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionsOnInterconnectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
