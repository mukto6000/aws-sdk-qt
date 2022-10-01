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

#include "listimagerecipesresponse.h"
#include "listimagerecipesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImageRecipesResponse
 * \brief The ListImageRecipesResponse class provides an interace for ImageBuilder ListImageRecipes responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImageRecipes
 */

/*!
 * Constructs a ListImageRecipesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImageRecipesResponse::ListImageRecipesResponse(
        const ListImageRecipesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListImageRecipesResponsePrivate(this), parent)
{
    setRequest(new ListImageRecipesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImageRecipesRequest * ListImageRecipesResponse::request() const
{
    Q_D(const ListImageRecipesResponse);
    return static_cast<const ListImageRecipesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListImageRecipes \a response.
 */
void ListImageRecipesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImageRecipesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListImageRecipesResponsePrivate
 * \brief The ListImageRecipesResponsePrivate class provides private implementation for ListImageRecipesResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImageRecipesResponsePrivate object with public implementation \a q.
 */
ListImageRecipesResponsePrivate::ListImageRecipesResponsePrivate(
    ListImageRecipesResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListImageRecipes response element from \a xml.
 */
void ListImageRecipesResponsePrivate::parseListImageRecipesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImageRecipesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
