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

#include "describeuserpoolclientresponse.h"
#include "describeuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientResponse
 * \brief The DescribeUserPoolClientResponse class provides an interace for CognitoIdentityProvider DescribeUserPoolClient responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeUserPoolClient
 */

/*!
 * Constructs a DescribeUserPoolClientResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserPoolClientResponse::DescribeUserPoolClientResponse(
        const DescribeUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserPoolClientRequest * DescribeUserPoolClientResponse::request() const
{
    Q_D(const DescribeUserPoolClientResponse);
    return static_cast<const DescribeUserPoolClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeUserPoolClient \a response.
 */
void DescribeUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserPoolClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolClientResponsePrivate
 * \brief The DescribeUserPoolClientResponsePrivate class provides private implementation for DescribeUserPoolClientResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolClientResponsePrivate object with public implementation \a q.
 */
DescribeUserPoolClientResponsePrivate::DescribeUserPoolClientResponsePrivate(
    DescribeUserPoolClientResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeUserPoolClient response element from \a xml.
 */
void DescribeUserPoolClientResponsePrivate::parseDescribeUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
