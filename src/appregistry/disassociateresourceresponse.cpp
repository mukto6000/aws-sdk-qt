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

#include "disassociateresourceresponse.h"
#include "disassociateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::DisassociateResourceResponse
 * \brief The DisassociateResourceResponse class provides an interace for AppRegistry DisassociateResource responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::disassociateResource
 */

/*!
 * Constructs a DisassociateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateResourceResponse::DisassociateResourceResponse(
        const DisassociateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new DisassociateResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateResourceRequest * DisassociateResourceResponse::request() const
{
    Q_D(const DisassociateResourceResponse);
    return static_cast<const DisassociateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRegistry DisassociateResource \a response.
 */
void DisassociateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::DisassociateResourceResponsePrivate
 * \brief The DisassociateResourceResponsePrivate class provides private implementation for DisassociateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a DisassociateResourceResponsePrivate object with public implementation \a q.
 */
DisassociateResourceResponsePrivate::DisassociateResourceResponsePrivate(
    DisassociateResourceResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry DisassociateResource response element from \a xml.
 */
void DisassociateResourceResponsePrivate::parseDisassociateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
