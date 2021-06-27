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

#include "deletecontainerreciperesponse.h"
#include "deletecontainerreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteContainerRecipeResponse
 * \brief The DeleteContainerRecipeResponse class provides an interace for imagebuilder DeleteContainerRecipe responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteContainerRecipe
 */

/*!
 * Constructs a DeleteContainerRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContainerRecipeResponse::DeleteContainerRecipeResponse(
        const DeleteContainerRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new DeleteContainerRecipeResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContainerRecipeRequest * DeleteContainerRecipeResponse::request() const
{
    return static_cast<const DeleteContainerRecipeRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder DeleteContainerRecipe \a response.
 */
void DeleteContainerRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContainerRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::DeleteContainerRecipeResponsePrivate
 * \brief The DeleteContainerRecipeResponsePrivate class provides private implementation for DeleteContainerRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteContainerRecipeResponsePrivate object with public implementation \a q.
 */
DeleteContainerRecipeResponsePrivate::DeleteContainerRecipeResponsePrivate(
    DeleteContainerRecipeResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder DeleteContainerRecipe response element from \a xml.
 */
void DeleteContainerRecipeResponsePrivate::parseDeleteContainerRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
