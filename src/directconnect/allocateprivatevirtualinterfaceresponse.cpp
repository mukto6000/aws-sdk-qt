/*
    Copyright 2013-2020 Paul Colby

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

#include "allocateprivatevirtualinterfaceresponse.h"
#include "allocateprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocatePrivateVirtualInterfaceResponse
 * \brief The AllocatePrivateVirtualInterfaceResponse class provides an interace for DirectConnect AllocatePrivateVirtualInterface responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::allocatePrivateVirtualInterface
 */

/*!
 * Constructs a AllocatePrivateVirtualInterfaceResponse object for \a reply to \a request, with parent \a parent.
 */
AllocatePrivateVirtualInterfaceResponse::AllocatePrivateVirtualInterfaceResponse(
        const AllocatePrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocatePrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new AllocatePrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocatePrivateVirtualInterfaceRequest * AllocatePrivateVirtualInterfaceResponse::request() const
{
    Q_D(const AllocatePrivateVirtualInterfaceResponse);
    return static_cast<const AllocatePrivateVirtualInterfaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AllocatePrivateVirtualInterface \a response.
 */
void AllocatePrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocatePrivateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AllocatePrivateVirtualInterfaceResponsePrivate
 * \brief The AllocatePrivateVirtualInterfaceResponsePrivate class provides private implementation for AllocatePrivateVirtualInterfaceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocatePrivateVirtualInterfaceResponsePrivate object with public implementation \a q.
 */
AllocatePrivateVirtualInterfaceResponsePrivate::AllocatePrivateVirtualInterfaceResponsePrivate(
    AllocatePrivateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AllocatePrivateVirtualInterface response element from \a xml.
 */
void AllocatePrivateVirtualInterfaceResponsePrivate::parseAllocatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocatePrivateVirtualInterfaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
