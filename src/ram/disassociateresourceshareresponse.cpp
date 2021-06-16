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

#include "disassociateresourceshareresponse.h"
#include "disassociateresourceshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::DisassociateResourceShareResponse
 * \brief The DisassociateResourceShareResponse class provides an interace for RAM DisassociateResourceShare responses.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 *
 * \sa RamClient::disassociateResourceShare
 */

/*!
 * Constructs a DisassociateResourceShareResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateResourceShareResponse::DisassociateResourceShareResponse(
        const DisassociateResourceShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new DisassociateResourceShareResponsePrivate(this), parent)
{
    setRequest(new DisassociateResourceShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateResourceShareRequest * DisassociateResourceShareResponse::request() const
{
    Q_D(const DisassociateResourceShareResponse);
    return static_cast<const DisassociateResourceShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RAM DisassociateResourceShare \a response.
 */
void DisassociateResourceShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateResourceShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RAM::DisassociateResourceShareResponsePrivate
 * \brief The DisassociateResourceShareResponsePrivate class provides private implementation for DisassociateResourceShareResponse.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a DisassociateResourceShareResponsePrivate object with public implementation \a q.
 */
DisassociateResourceShareResponsePrivate::DisassociateResourceShareResponsePrivate(
    DisassociateResourceShareResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a RAM DisassociateResourceShare response element from \a xml.
 */
void DisassociateResourceShareResponsePrivate::parseDisassociateResourceShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateResourceShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RAM
} // namespace QtAws
