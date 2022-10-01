// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinterconnectloaresponse.h"
#include "describeinterconnectloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectLoaResponse
 * \brief The DescribeInterconnectLoaResponse class provides an interace for DirectConnect DescribeInterconnectLoa responses.
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
 * \sa DirectConnectClient::describeInterconnectLoa
 */

/*!
 * Constructs a DescribeInterconnectLoaResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInterconnectLoaResponse::DescribeInterconnectLoaResponse(
        const DescribeInterconnectLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeInterconnectLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeInterconnectLoaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInterconnectLoaRequest * DescribeInterconnectLoaResponse::request() const
{
    Q_D(const DescribeInterconnectLoaResponse);
    return static_cast<const DescribeInterconnectLoaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeInterconnectLoa \a response.
 */
void DescribeInterconnectLoaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInterconnectLoaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeInterconnectLoaResponsePrivate
 * \brief The DescribeInterconnectLoaResponsePrivate class provides private implementation for DescribeInterconnectLoaResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeInterconnectLoaResponsePrivate object with public implementation \a q.
 */
DescribeInterconnectLoaResponsePrivate::DescribeInterconnectLoaResponsePrivate(
    DescribeInterconnectLoaResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeInterconnectLoa response element from \a xml.
 */
void DescribeInterconnectLoaResponsePrivate::parseDescribeInterconnectLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInterconnectLoaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
